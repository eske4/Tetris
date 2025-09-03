cmake_minimum_required(VERSION 3.25.1)

project(Tetris)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(cmake/CPM.cmake)
include(cmake/Packages.cmake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src)
add_subdirectory(app)
