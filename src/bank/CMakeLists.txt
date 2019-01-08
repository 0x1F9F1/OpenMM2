cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(bank STATIC
    bank.cpp
    bank.h
    bklocbank.cpp
    bklocbank.h
    bklocmgr.cpp
    bklocmgr.h
    bklocwidget.cpp
    bklocwidget.h
    bkmgr.cpp
    bkmgr.h
    bkwinbank.cpp
    bkwinbank.h
    bkwinbutton.cpp
    bkwinbutton.h
    bkwincombo.cpp
    bkwincombo.h
    bkwingroup.cpp
    bkwingroup.h
    bkwinmenu.cpp
    bkwinmenu.h
    bkwinmgr.cpp
    bkwinmgr.h
    bkwinslider.cpp
    bkwinslider.h
    bkwintext.cpp
    bkwintext.h
    bkwintoggle.cpp
    bkwintoggle.h
    bkwintree.cpp
    bkwintree.h
    bkwinwidget.cpp
    bkwinwidget.h
    button.cpp
    button.h
    color.cpp
    color.h
    combo.cpp
    combo.h
    group.cpp
    group.h
    slider.cpp
    slider.h
    text.cpp
    text.h
    toggle.cpp
    toggle.h
    widget.cpp
    widget.h
)

target_link_libraries(bank hooking)
