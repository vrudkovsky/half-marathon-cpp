cmake_minimum_required(VERSION 3.16.3)
project(referenceOrPointer)

set(HEADERS
        referenceOrPointer.h
)

set(SOURCES
        referenceOrPointer.cpp
        main.cpp
)

add_executable(referenceOrPointer ${HEADERS} ${SOURCES})

set_target_properties(referenceOrPointer PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -Wall -Wextra -Werror -Wpedantic"
)
