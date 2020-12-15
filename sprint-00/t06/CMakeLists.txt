cmake_minimum_required(VERSION 3.16.3)
project(meadSong)

set(HEADERS
        meadSong.h
        )
set(SOURCES
        meadSong.cpp
        main.cpp
)

add_executable(meadSong ${SOURCES})

set_target_properties(meadSong PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/.."
        CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -Wall -Wextra -Werror -Wpedantic"
)
