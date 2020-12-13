project(automation)

set(SOURCES
    main.cpp
)

add_executable(automation ${SOURCES})

set_target_properties(automation PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)
