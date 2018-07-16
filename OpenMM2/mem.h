#ifndef MEM_H
#define MEM_H

#include <type_traits>
#include <cstdint>
#include <cstddef>
#include <cstring>

#include <vector>
#include <array>
#include <string>
#include <functional>

namespace mem
{
    class pointer;
    class region;
    class module;
    class pattern;
    class protect;

    namespace traits
    {
        namespace detail
        {
            template <typename...>
            using void_t = void;

            template <typename, template <typename...> typename T, typename... Args>
            struct is_detected
                : std::false_type
            { };

            template <template <typename...> typename T, typename... Args>
            struct is_detected<void_t<T<Args...>>, T, Args...>
                : std::true_type
            { };
        }

        template <template <typename...> typename T, typename... Args>
        struct is_detected
            : detail::is_detected<void, T, Args...>
        { };

        template <typename Function>
        struct is_invocable
            : is_detected<std::result_of_t, Function>
        { };

        template <typename Function>
        struct is_function_pointer
            : std::integral_constant<bool, std::is_pointer_v<Function> && std::is_function_v<std::remove_pointer_t<std::decay_t<Function>>>>
        { };
    }

    namespace conventions
    {
        template <typename Result, typename... Args>
        using func_t = Result(*)(Args...);

        template <typename Result, typename Class, typename... Args>
        using thiscall_t = Result(Class::*)(Args...);

    #ifdef MEM_WINDOWS
        template <typename Result, typename... Args>
        using cdecl_t = Result(__cdecl*)(Args...);

        template <typename Result, typename... Args>
        using stdcall_t = Result(__stdcall*)(Args...);

        template <typename Result, typename... Args>
        using fastcall_t = Result(__fastcall*)(Args...);
    #endif // MEM_WINDOWS
    }

    class pointer
    {
    protected:
        uintptr_t value_;

    public:
        pointer() noexcept;
        pointer(const std::nullptr_t null) noexcept;
        pointer(const uintptr_t value) noexcept;

        template <typename T, typename = std::enable_if_t<std::is_pointer_v<T> || std::is_member_pointer_v<T>>>
        pointer(T value)
            : pointer(reinterpret_cast<const uintptr_t&>(value))
        { }

        bool null() const noexcept;

        pointer add(const pointer& value) const noexcept;
        pointer sub(const pointer& value) const noexcept;

        size_t dist(const pointer& value) const noexcept;

        pointer shift(const pointer& from, const pointer& to) const noexcept;

        pointer rip(const ptrdiff_t offset) const;

        pointer& deref() const noexcept;

        pointer operator+(const pointer& value) const noexcept;
        pointer operator-(const pointer& value) const noexcept;

        pointer& operator+=(const pointer& value) noexcept;
        pointer& operator-=(const pointer& value) noexcept;

        pointer& operator++() noexcept;
        pointer& operator--() noexcept;

        pointer operator++(int) noexcept;
        pointer operator--(int) noexcept;

        bool operator==(const pointer& value) const noexcept;
        bool operator!=(const pointer& value) const noexcept;

        bool operator<(const pointer& value) const noexcept;
        bool operator>(const pointer& value) const noexcept;

        bool operator<=(const pointer& value) const noexcept;
        bool operator>=(const pointer& value) const noexcept;

        template <typename Func, typename... Args>
        decltype(auto) invoke(Args&&... args) const;

        template <typename T>
        std::enable_if_t<std::is_same_v<T, pointer>, T> as() const noexcept;

        template <typename T>
        std::enable_if_t<std::is_integral_v<T>, T> as() const noexcept;

        template <typename T>
        std::enable_if_t<std::is_pointer_v<T>, T> as() const noexcept;

        template <typename T>
        std::enable_if_t<std::is_lvalue_reference_v<T>, T> as() const noexcept;

        template <typename T>
        std::enable_if_t<std::is_array_v<T>, std::add_lvalue_reference_t<T>> as() const noexcept;

        template <typename T>
        std::enable_if_t<std::is_member_pointer_v<T>, T> as() const noexcept;

        template <typename T>
        std::enable_if_t<std::is_same_v<T, region>, region> as(const size_t size) const noexcept;
    };

    class region
    {
    protected:
        pointer base_;
        size_t size_;

    public:
        region() noexcept;
        region(const pointer& base, const size_t size) noexcept;

        pointer base() const noexcept;
        size_t size() const noexcept;

        pointer at(const size_t offset) const noexcept;

        bool contains(const region& value) const noexcept;

        bool contains(const pointer& value) const noexcept;
        bool contains(const pointer& value, const size_t size) const noexcept;

        template <typename T>
        bool contains(const pointer& value) const noexcept;

        void copy(const pointer& data) const noexcept;
        void set(const uint8_t value) const noexcept;

        region sub_region(const pointer& address) const noexcept;

#ifdef MEM_WINDOWS
        protect unprotect() const noexcept;
#endif // MEM_WINDOWS

        pointer scan(const pattern& pattern) const;
        std::vector<pointer> scan_all(const pattern& pattern) const;

        bool is_ascii() const;

        std::string str() const;
        std::string hex(bool upper_case = true, bool padded = false) const;
    };

#ifdef MEM_WINDOWS
    class protect
        : public region
    {
    protected:
        DWORD old_protect_;
        bool success_;

    public:
        protect(region region, DWORD new_protect);
        ~protect();

        protect(protect&&);
        protect(const protect&) = delete;
    };
#endif // MEM_WINDOWS

#ifdef MEM_WINDOWS
    class module
        : public region
    {
    protected:
        static module get_nt_module(const pointer& address);

    public:
        using region::region;

        static module named(const char* name);
        static module named(const wchar_t* name);

        static module main();
        static module self();
    };
#endif // MEM_WINDOWS

    struct masked_byte
    {
        uint8_t value;
        uint8_t mask;

        inline constexpr masked_byte() noexcept
            : value()
            , mask()
        { }

        inline constexpr masked_byte(const uint8_t value, const uint8_t mask) noexcept
            : value(value)
            , mask(mask)
        { }

        inline constexpr bool equals_mask(const uint8_t v) const noexcept
        {
            return !((v ^ value) & mask);
        }

        inline constexpr bool equals_value(const uint8_t v) const noexcept
        {
            return (v == value);
        }

        static std::vector<masked_byte> parse(const char* string);
    };

    class pattern
    {
    protected:
        std::vector<masked_byte> bytes_;
        std::vector<size_t> skips_;
        size_t max_skip_;

        template <bool(masked_byte::*Equal)(const uint8_t v) const noexcept>
        bool match_internal(const pointer& address) const;

        size_t get_skip(const pointer& address) const noexcept;
        size_t get_noskip(const pointer& address) const noexcept;

        template <bool(masked_byte::*Equal)(const uint8_t v) const noexcept, size_t(pattern::*GetSkip)(const pointer& address) const noexcept>
        pointer scan_internal(const region& region) const;

    public:
        pattern(const char* pattern);

        bool match(const pointer& address) const;

        pointer scan(const region& region) const;

        std::vector<pointer> scan_all(const region& region) const;
    };

#ifndef MEM_HEADER_ONLY
    class init_function
    {
    protected:
        init_function * next_;
        static init_function* first_;

    public:
        init_function();

        virtual void run() = 0;

        static void init();
    };

    class static_function
        : public init_function
    {
    protected:
        using callback_t = void(*)(void);

        callback_t callback_;

    public:
        static_function(callback_t callback);

        virtual void run() override;
    };
#endif

#ifdef MEM_WINDOWS
    namespace rtti
    {
        struct PMD;
        struct RTTITypeDescriptor;
        struct RTTICompleteObjectLocator;
        struct RTTIClassHierarchyDescriptor;
        struct RTTIBaseClassArray;
        struct RTTIBaseClassDescriptor;

        struct PMD
        {
            int32_t mdisp; // member displacement
            int32_t pdisp; // vbtable displacement
            int32_t vdisp; // displacement inside vbtable
        };

        struct RTTITypeDescriptor // type_info
        {
            void* vTable;
            const char* UndecoratedName;
            const char DecoratedName[1];

#ifdef MEM_DEMANGLE
            std::string demangle() const;
#endif // MEM_DEMANGLE
        };

        struct RTTICompleteObjectLocator
        {
            uint32_t signature;        // 0 = x86, 1 = x64
            uint32_t offset;           // offset of this vtable in the complete class
            uint32_t cdOffset;         // constructor displacement offset
            uint32_t pTypeDescriptor;  // TypeDescriptor of the complete class
            uint32_t pClassDescriptor; // describes inheritance hierarchy

#if MEM_WINDOWS == 64
            uint32_t pSelf;
#endif // MEM_WINDOWS == 64

            bool check_signature() const;
            RTTITypeDescriptor* get_type(const region& region) const;
            RTTIClassHierarchyDescriptor* get_class(const region& region) const;

#if MEM_WINDOWS == 64
            RTTICompleteObjectLocator* get_self(const region& region) const;
#endif // MEM_WINDOWS == 64
        };

        struct RTTIClassHierarchyDescriptor
        {
            uint32_t signature;        // 0 = x86, 1 = x64
            uint32_t attributes;       // bit 0 set = multiple inheritance, bit 1 set = virtual inheritance
            uint32_t numBaseClasses;   // number of base classes
            uint32_t pBaseClassArray;

            bool check_signature() const;
            uint32_t get_base_count() const;
            RTTIBaseClassArray* get_base_classes(const region& region) const;

            bool inherits_from(const region& region, const RTTITypeDescriptor* type) const;
        };

        struct RTTIBaseClassArray
        {
            uint32_t arrayOfBaseClassDescriptors[1];

            RTTIBaseClassDescriptor* get_base_class(const region& region, const uint32_t index) const;
        };

        struct RTTIBaseClassDescriptor
        {
            uint32_t pTypeDescriptor;      // type descriptor of the class
            uint32_t numContainedBases;    // number of nested classes following in the Base Class Array
            PMD where;                     // pointer-to-member displacement info
            uint32_t attributes;           // flags, usually 0

            RTTITypeDescriptor* get_type(const region& region) const;
        };

        void enumerate_rtti(const region& region, const std::function<bool(const void** vTable, const RTTICompleteObjectLocator* object, const RTTITypeDescriptor* type)> callback);
        const RTTITypeDescriptor* find_rtti_type(const region& region, const char* name);
    }
#endif // MEM_WINDOWS
}

#define MEM_INLINE_FUNC inline

#ifdef MEM_HEADER_ONLY
# define MEM_FUNC inline
#endif // MEM_HEADER_ONLY

#endif // MEM_H

#ifdef MEM_INLINE_FUNC
namespace mem
{
    MEM_INLINE_FUNC pointer::pointer() noexcept
        : value_()
    { }

    MEM_INLINE_FUNC pointer::pointer(std::nullptr_t) noexcept
        : value_()
    { }

    MEM_INLINE_FUNC pointer::pointer(const uintptr_t p) noexcept
        : value_(p)
    { }

    MEM_INLINE_FUNC bool pointer::null() const noexcept
    {
        return !value_;
    }

    MEM_INLINE_FUNC pointer pointer::add(const pointer& value) const noexcept
    {
        return value_ + value.value_;
    }

    MEM_INLINE_FUNC pointer pointer::sub(const pointer& value) const noexcept
    {
        return value_ - value.value_;
    }

    MEM_INLINE_FUNC size_t pointer::dist(const pointer& value) const noexcept
    {
        return value.sub(*this).as<size_t>();
    }

    MEM_INLINE_FUNC pointer pointer::shift(const pointer& from, const pointer& to) const noexcept
    {
        return sub(from).add(to);
    }

    MEM_INLINE_FUNC pointer pointer::rip(const ptrdiff_t offset) const
    {
        return add(offset).add(as<int32_t&>());
    }

    MEM_INLINE_FUNC pointer& pointer::deref() const noexcept
    {
        return as<pointer&>();
    }

    MEM_INLINE_FUNC pointer pointer::operator+(const pointer& value) const noexcept
    {
        return add(value);
    }

    MEM_INLINE_FUNC pointer pointer::operator-(const pointer& value) const noexcept
    {
        return sub(value);
    }

    MEM_INLINE_FUNC pointer& pointer::operator+=(const pointer& value) noexcept
    {
        return *this = *this + value;
    }

    MEM_INLINE_FUNC pointer& pointer::operator-=(const pointer& value) noexcept
    {
        return *this = *this - value;
    }

    MEM_INLINE_FUNC pointer& pointer::operator++() noexcept
    {
        return *this = *this + 1;
    }

    MEM_INLINE_FUNC pointer& pointer::operator--() noexcept
    {
        return *this = *this - 1;
    }

    MEM_INLINE_FUNC pointer pointer::operator++(int) noexcept
    {
        pointer result = *this;

        ++(*this);

        return result;
    }

    MEM_INLINE_FUNC pointer pointer::operator--(int) noexcept
    {
        pointer result = *this;

        --(*this);

        return result;
    }

    MEM_INLINE_FUNC bool pointer::operator==(const pointer& value) const noexcept
    {
        return value_ == value.value_;
    }

    MEM_INLINE_FUNC bool pointer::operator!=(const pointer& value) const noexcept
    {
        return value_ != value.value_;
    }

    MEM_INLINE_FUNC bool pointer::operator<(const pointer& value) const noexcept
    {
        return value_ < value.value_;
    }

    MEM_INLINE_FUNC bool pointer::operator>(const pointer& value) const noexcept
    {
        return value_ > value.value_;
    }

    MEM_INLINE_FUNC bool pointer::operator<=(const pointer& value) const noexcept
    {
        return value_ <= value.value_;
    }

    MEM_INLINE_FUNC bool pointer::operator>=(const pointer& value) const noexcept
    {
        return value_ >= value.value_;
    }

    template <typename Func, typename... Args>
    MEM_INLINE_FUNC decltype(auto) pointer::invoke(Args&&... args) const
    {
        return std::invoke(as<Func>(), std::forward<Args>(args)...);
    }

    template <typename T>
    MEM_INLINE_FUNC std::enable_if_t<std::is_same_v<T, pointer>, T> pointer::as() const noexcept
    {
        return *this;
    }

    template <typename T>
    MEM_INLINE_FUNC std::enable_if_t<std::is_integral_v<T>, T> pointer::as() const noexcept
    {
        static_assert(std::is_same_v<std::make_unsigned_t<T>, uintptr_t>, "Invalid Integer Type");

        return static_cast<T>(value_);
    }

    template <typename T>
    MEM_INLINE_FUNC std::enable_if_t<std::is_pointer_v<T>, T> pointer::as() const noexcept
    {
        return reinterpret_cast<T>(value_);
    }

    template <typename T>
    MEM_INLINE_FUNC std::enable_if_t<std::is_lvalue_reference_v<T>, T> pointer::as() const noexcept
    {
        return *as<std::add_pointer_t<T>>();
    }

    template <typename T>
    MEM_INLINE_FUNC std::enable_if_t<std::is_array_v<T>, std::add_lvalue_reference_t<T>> pointer::as() const noexcept
    {
        return as<std::add_lvalue_reference_t<T>>();
    }

    template <typename T>
    MEM_INLINE_FUNC std::enable_if_t<std::is_member_pointer_v<T>, T> pointer::as() const noexcept
    {
        return reinterpret_cast<const T&>(value_);
    }

    template <typename T>
    MEM_INLINE_FUNC std::enable_if_t<std::is_same_v<T, region>, region> pointer::as(const size_t size) const noexcept
    {
        return region(*this, size);
    }

    MEM_INLINE_FUNC region::region() noexcept
        : base_(nullptr)
        , size_()
    { }

    MEM_INLINE_FUNC region::region(const pointer& base, const size_t size) noexcept
        : base_(base)
        , size_(size)
    { }

    MEM_INLINE_FUNC pointer region::base() const noexcept
    {
        return base_;
    }

    MEM_INLINE_FUNC size_t region::size() const noexcept
    {
        return size_;
    }

    MEM_INLINE_FUNC pointer region::at(const size_t offset) const noexcept
    {
        pointer result = base().add(offset);

        return contains(result) ? result : nullptr;
    }

    MEM_INLINE_FUNC bool region::contains(const region& value) const noexcept
    {
        return base().dist(value.base()) + value.size() <= size();
    }

    MEM_INLINE_FUNC bool region::contains(const pointer& value) const noexcept
    {
        return contains(region(value, 1));
    }

    MEM_INLINE_FUNC bool region::contains(const pointer& value, const size_t size) const noexcept
    {
        return contains(region(value, size));
    }

    template <typename T>
    MEM_INLINE_FUNC bool region::contains(const pointer& value) const noexcept
    {
        return contains(value, sizeof(T));
    }

    MEM_INLINE_FUNC void region::copy(const pointer& data) const noexcept
    {
        memcpy(base().as<void*>(), data.as<const void*>(), size());
    }

    MEM_INLINE_FUNC void region::set(const uint8_t value) const noexcept
    {
        memset(base().as<void*>(), value, size_);
    }

    MEM_INLINE_FUNC region region::sub_region(const pointer& address) const noexcept
    {
        return region(address, size() - base().dist(address));
    }

    MEM_INLINE_FUNC pointer region::scan(const pattern& pattern) const
    {
        return pattern.scan(*this);
    }

    MEM_INLINE_FUNC std::vector<pointer> region::scan_all(const pattern& pattern) const
    {
        return pattern.scan_all(*this);
    }

    MEM_INLINE_FUNC bool region::is_ascii() const
    {
        for (size_t i = 0; i < size(); ++i)
        {
            if ((at(i).as<uint8_t&>() - 0x20) <= 0x5F)
            {
                return false;
            }
        }

        return true;
    }

    MEM_INLINE_FUNC std::string region::str() const
    {
        return std::string(base().as<const char*>(), size());
    }

    MEM_INLINE_FUNC std::string region::hex(bool upper_case, bool padded) const
    {
        const char* const char_hex_table = upper_case ? "0123456789ABCDEF" : "0123456789abcdef";

        std::string result;

        result.reserve(size_ * (padded ? 3 : 2));

        for (size_t i = 0; i < size_; ++i)
        {
            const uint8_t v = base().add(i).as<const uint8_t&>();

            if (i && padded)
            {
                result.push_back(' ');
            }

            result.push_back(char_hex_table[(v >> 4) & 0xF]);
            result.push_back(char_hex_table[(v >> 0) & 0xF]);
        }

        return result;
    }

#ifndef MEM_HEADER_ONLY
    MEM_INLINE_FUNC init_function::init_function()
        : next_(std::exchange(first_, this))
    { }

    MEM_INLINE_FUNC void init_function::init()
    {
        for (init_function* func = first_; func; func = std::exchange(func->next_, nullptr))
        {
            func->run();
        }
    }

    MEM_INLINE_FUNC static_function::static_function(callback_t callback)
        : callback_(callback)
    { }

    MEM_INLINE_FUNC void static_function::run()
    {
        callback_();
    }

#endif
}
#endif // MEM_INLINE_FUNC

#ifdef MEM_IMPLEMENTATION
# undef MEM_IMPLEMENTATION
# ifndef MEM_HEADER_ONLY
#  define MEM_FUNC
#  define MEM_STATIC
# else
#  error "mem already defined as header only"
# endif
#endif // MEM_IMPLEMENTATION

#ifdef MEM_FUNC
namespace mem
{
#ifdef MEM_WINDOWS
    MEM_FUNC protect region::unprotect() const noexcept
    {
        return protect(*this, PAGE_EXECUTE_READWRITE);
    }
#endif // MEM_WINDOWS

#ifdef MEM_WINDOWS
    MEM_FUNC protect::protect(region region, DWORD new_protect)
        : region(region)
        , old_protect_(0)
        , success_(false)
    {
        success_ = VirtualProtect(base().as<void*>(), size(), new_protect, &old_protect_);
    }

    MEM_FUNC protect::~protect()
    {
        if (success_)
        {
            VirtualProtect(base().as<void*>(), size(), old_protect_, &old_protect_);
        }
    }

    MEM_FUNC protect::protect(protect && rhs)
    {
        old_protect_ = std::exchange(rhs.old_protect_, 0);
        success_ = std::exchange(rhs.success_, false);
    }
#endif // MEM_WINDOWS

#ifdef MEM_WINDOWS
    extern "C" namespace detail
    {
        IMAGE_DOS_HEADER __ImageBase;
    }

    MEM_FUNC module module::get_nt_module(const pointer& address)
    {
        const IMAGE_DOS_HEADER* dos = address.as<const IMAGE_DOS_HEADER*>();
        const IMAGE_NT_HEADERS* nt = address.add(dos->e_lfanew).as<const IMAGE_NT_HEADERS*>();

        return module(address, nt->OptionalHeader.SizeOfImage);
    }

    MEM_FUNC module module::named(const char* name)
    {
        return get_nt_module(GetModuleHandleA(name));
    }

    MEM_FUNC module module::named(const wchar_t* name)
    {
        return get_nt_module(GetModuleHandleW(name));
    }

    MEM_FUNC module module::main()
    {
        return module::named(static_cast<const char*>(nullptr));
    }

    MEM_FUNC module module::self()
    {
        return get_nt_module(&detail::__ImageBase);
    }
#endif // MEM_WINDOWS

    MEM_FUNC std::vector<masked_byte> masked_byte::parse(const char* string)
    {
        static constexpr const std::array<masked_byte, 256> hex_char_table
        { {
            { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0x00 },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0x00 },{ 0x0,0xFF },
        { 0x0,0x0F },{ 0x1,0x0F },{ 0x2,0x0F },{ 0x3,0x0F },{ 0x4,0x0F },{ 0x5,0x0F },{ 0x6,0x0F },{ 0x7,0x0F },
        { 0x8,0x0F },{ 0x9,0x0F },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0x00 },
        { 0x0,0xFF },{ 0xA,0x0F },{ 0xB,0x0F },{ 0xC,0x0F },{ 0xD,0x0F },{ 0xE,0x0F },{ 0xF,0x0F },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0x00 },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0xA,0x0F },{ 0xB,0x0F },{ 0xC,0x0F },{ 0xD,0x0F },{ 0xE,0x0F },{ 0xF,0x0F },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0x00 },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
        { 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },{ 0x0,0xFF },
            } };

        std::vector<masked_byte> results;

        while (true)
        {
            masked_byte b;
            char c = 0;
            int i = 0;

            while ((c = *string++) != '\0')
            {
                const masked_byte& v = hex_char_table[c];

                if (v.mask != 0xFF)
                {
                    b.value = (b.value << 4) | v.value;
                    b.mask = (b.mask << 4) | v.mask;

                    if (++i >= 2)
                    {
                        break;
                    }
                }
                else if (i)
                {
                    break;
                }
            }

            if (c || i)
            {
                results.push_back(b);
            }

            if (!c)
            {
                break;
            }
        }

        return results;
    }

    MEM_FUNC pattern::pattern(const char* pattern)
        : bytes_()
        , skips_()
        , max_skip_()
    {
        bytes_ = masked_byte::parse(pattern);

        while (!bytes_.empty() && !bytes_.back().mask)
        {
            bytes_.pop_back();
        }

        if (!bytes_.empty())
        {
            size_t last_mask = bytes_.size();

            while (last_mask--)
            {
                if (bytes_[last_mask].mask != 0xFF)
                {
                    break;
                }
            }

            max_skip_ = bytes_.size() - last_mask - 1;

            if (max_skip_)
            {
                skips_.resize(256, max_skip_);

                for (size_t i = bytes_.size() - max_skip_, last = bytes_.size() - 1; i < last; ++i)
                {
                    skips_[bytes_[i].value] = last - i;
                }
            }
        }
    }

    template <bool (masked_byte::*Equal)(const uint8_t v) const noexcept>
    MEM_FUNC bool pattern::match_internal(const pointer& address) const
    {
        for (size_t i = bytes_.size(); i--;)
        {
            if (!(bytes_[i].*Equal)(address.add(i).as<const uint8_t&>()))
            {
                return false;
            }
        }

        return true;
    }

    MEM_FUNC size_t pattern::get_skip(const pointer& address) const noexcept
    {
        return skips_[(address + bytes_.size() - 1).as<const uint8_t&>()];
    }

    MEM_FUNC size_t pattern::get_noskip(const pointer&) const noexcept
    {
        return 1;
    }

    template <bool(masked_byte::*Equal)(const uint8_t v) const noexcept, size_t(pattern::*GetSkip)(const pointer& address) const noexcept>
    MEM_FUNC pointer pattern::scan_internal(const region& region) const
    {
        for (size_t i = 0, end = region.size() - bytes_.size(); i < end;)
        {
            const pointer address = region.base() + i;

            if (match_internal<Equal>(address))
            {
                return address;
            }

            i += (this->*GetSkip)(address);
        }

        return nullptr;
    }

    MEM_FUNC bool pattern::match(const pointer& address) const
    {
        return match_internal<&masked_byte::equals_mask>(address);
    }

    MEM_FUNC pointer pattern::scan(const region& region) const
    {
        constexpr const size_t MIN_SKIP = 4;

        if (bytes_.size() > region.size())
        {
            return nullptr;
        }

        const bool masked = max_skip_ != bytes_.size();
        const bool skips = max_skip_ >= MIN_SKIP;

        if (masked)
        {
            if (skips)
            {
                return scan_internal<&masked_byte::equals_mask, &pattern::get_skip>(region);
            }
            else
            {
                return scan_internal<&masked_byte::equals_mask, &pattern::get_noskip>(region);
            }
        }
        else
        {
            if (skips)
            {
                return scan_internal<&masked_byte::equals_value, &pattern::get_skip>(region);
            }
            else
            {
                return scan_internal<&masked_byte::equals_value, &pattern::get_noskip>(region);
            }
        }
    }

    MEM_FUNC std::vector<pointer> pattern::scan_all(const region& region) const
    {
        std::vector<pointer> results;

        if (bytes_.size() > region.size())
        {
            return results;
        }

        for (pointer p = region.base(); p = scan(region.sub_region(p)), !p.null(); ++p)
        {
            results.push_back(p);
        }

        return results;
    }

#ifdef MEM_WINDOWS
    namespace rtti
    {
        inline bool check_rtti_signature(const uint32_t signature)
        {
#if MEM_WINDOWS == 64
            return signature == 1;
#elif MEM_WINDOWS == 32
            return signature == 0;
#else
# error "Invalid Architecture"
#endif
        }

        template <typename T>
        inline T* get_rtti_pointer(const region& region, const uint32_t address)
        {
            const pointer result =
#if MEM_WINDOWS == 64
                region.base().add(address);
#elif MEM_WINDOWS == 32
                address;
#else
# error "Invalid Architecture"
#endif

            if (region.contains<T>(result))
            {
                return result.as<T*>();
            }

            return nullptr;
        }

#ifdef MEM_DEMANGLE
        MEM_FUNC std::string RTTITypeDescriptor::demangle() const
        {
#ifdef _DBGHELP_
            char buffer[1024];

            if (DWORD symbol_size = UnDecorateSymbolName(DecoratedName + 1, buffer, 1024, UNDNAME_32_BIT_DECODE | UNDNAME_NAME_ONLY | UNDNAME_NO_ARGUMENTS | UNDNAME_NO_MS_KEYWORDS))
            {
                return std::string(buffer, symbol_size);
            }

            return "";
#else
# error "Missing UnDecorateSymbolName"
#endif // _DBGHELP_
        }
#endif // MEM_DEMANGLE

        MEM_FUNC bool RTTICompleteObjectLocator::check_signature() const
        {
            return check_rtti_signature(signature);
        }

        MEM_FUNC RTTITypeDescriptor* RTTICompleteObjectLocator::get_type(const region& region) const
        {
            return get_rtti_pointer<RTTITypeDescriptor>(region, pTypeDescriptor);
        }

        MEM_FUNC RTTIClassHierarchyDescriptor* RTTICompleteObjectLocator::get_class(const region& region) const
        {
            return get_rtti_pointer<RTTIClassHierarchyDescriptor>(region, pClassDescriptor);
        }

#if MEM_WINDOWS == 64
        MEM_FUNC RTTICompleteObjectLocator* RTTICompleteObjectLocator::get_self(const region& region) const
        {
            return get_rtti_pointer<RTTICompleteObjectLocator>(region, pSelf);
        }
#endif // MEM_WINDOWS == 64

        MEM_FUNC bool RTTIClassHierarchyDescriptor::check_signature() const
        {
            return check_rtti_signature(signature);
        }

        MEM_FUNC uint32_t RTTIClassHierarchyDescriptor::get_base_count() const
        {
            return numBaseClasses;
        }

        MEM_FUNC RTTIBaseClassArray* RTTIClassHierarchyDescriptor::get_base_classes(const region& region) const
        {
            return get_rtti_pointer<RTTIBaseClassArray>(region, pBaseClassArray);
        }

        MEM_FUNC bool RTTIClassHierarchyDescriptor::inherits_from(const region& region, const RTTITypeDescriptor* type) const
        {
            const RTTIBaseClassArray* base_classes = get_base_classes(region);

            for (uint32_t i = 1; i < get_base_count(); ++i)
            {
                const RTTIBaseClassDescriptor* base_class = base_classes->get_base_class(region, i);
                const RTTITypeDescriptor* base_type = base_class->get_type(region);

                if (!strcmp(base_type->DecoratedName, type->DecoratedName))
                {
                    return true;
                }
            }

            return false;
        }

        MEM_FUNC RTTIBaseClassDescriptor* RTTIBaseClassArray::get_base_class(const region& region, const uint32_t index) const
        {
            return get_rtti_pointer<RTTIBaseClassDescriptor>(region, arrayOfBaseClassDescriptors[index]);
        }

        MEM_FUNC RTTITypeDescriptor* RTTIBaseClassDescriptor::get_type(const region& region) const
        {
            return get_rtti_pointer<RTTITypeDescriptor>(region, pTypeDescriptor);
        }

        MEM_FUNC void enumerate_rtti(const region& region, const std::function<bool(const void** vTable, const RTTICompleteObjectLocator* object, const RTTITypeDescriptor* type)> callback)
        {
            for (size_t i = 0; i < region.size(); i += sizeof(void*))
            {
                const RTTICompleteObjectLocator*& locator = region.base().add(i).as<const RTTICompleteObjectLocator*&>();

                if (!region.contains<RTTICompleteObjectLocator>(locator))
                {
                    continue;
                }

                if (!locator->check_signature())
                {
                    continue;
                }

#if MEM_WINDOWS == 64
                if (locator->get_self(region) != locator)
                {
                    continue;
                }
#endif // MEM_WINDOWS == 64

                const RTTITypeDescriptor* type = locator->get_type(region);

                if (!type)
                {
                    continue;
                }

                if (!region.contains<void*>(type->vTable))
                {
                    continue;
                }

                if (strncmp(type->DecoratedName, ".?", 2))
                {
                    continue;
                }

                if (callback(reinterpret_cast<const void**>(&locator + 1), locator, type))
                {
                    break;
                }
            }
        }

#ifdef MEM_DEMANGLE
        MEM_FUNC const RTTITypeDescriptor* find_rtti_type(const region& region, const char* name)
        {
            const RTTITypeDescriptor* result = nullptr;

            enumerate_rtti(region, [&result, name](const void**, const RTTICompleteObjectLocator*, const RTTITypeDescriptor* type) -> bool
            {
                if (type->demangle() == name)
                {
                    result = type;

                    return true;
                }

                return false;
            });

            return result;
        }
#endif // MEM_DEMANGLE
    }
#endif // MEM_WINDOWS
}
#endif // MEM_FUNC

#ifdef MEM_STATIC
namespace mem
{
    init_function* init_function::first_ = nullptr;
}
#endif // MEM_STATIC

#undef MEM_INLINE_FUNC
#undef MEM_FUNC
#undef MEM_STATIC
