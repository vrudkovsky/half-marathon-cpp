cmake_minimum_required(VERSION 3.16.3)
project(print_dialog)

set(HEADERS
        printDialog.h
        )

set(SOURCES
        printDialog.cpp
        main.cpp
        )

set(CMAKE_CXX_STANDARD 17)

add_executable(printDialog ${HEADERS} ${SOURCES})

set_target_properties(printDialog PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -Wall -Wextra -Werror -Wpedantic"
)
