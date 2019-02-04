add_subdirectory(mem)
add_subdirectory(zlib)

target_include_directories(zlibstatic PUBLIC
    ${zlib_SOURCE_DIR}
    ${zlib_BINARY_DIR}
)
