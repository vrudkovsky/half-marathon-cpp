cmake_minimum_required(VERSION 3.16.3)
project(helloTamriel)

set(SOURCES
    helloTamriel.cpp
)

add_executable(helloTamriel ${SOURCES})

set_target_properties(helloTamriel PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -Wall -Wextra -Werror -Wpedantic"
)
