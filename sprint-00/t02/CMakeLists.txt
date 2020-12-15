cmake_minimum_required(VERSION 3.16.3)
project(walletManager)

set(HEADERS
        walletManager.h
)

set(SOURCES
        walletManager.cpp
        main.cpp
)

add_executable(walletManager ${HEADERS} ${SOURCES})

set_target_properties(walletManager PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -Wall -Wextra -Werror -Wpedantic"
)
