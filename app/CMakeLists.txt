add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE Game)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/app)
