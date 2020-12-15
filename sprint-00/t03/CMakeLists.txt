project(castSpells)

set(HEADERS
    castSpells.h
)

set(SOURCES
    castSpells.cpp
    main.cpp
)

add_executable(castSpells ${HEADERS} ${SOURCES})

set_target_properties(castSpells PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON

)
