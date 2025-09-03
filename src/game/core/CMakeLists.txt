set(GAME_SOURCES Board.cpp Tetronimo.cpp)

add_library(Game ${GAME_SOURCES})

target_include_directories(Game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
