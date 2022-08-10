cmake_minimum_required(VERSION 3.10)
project(hello_world_with_header_file)
include_directories(${PROJECT_SOURCE_DIR})
add_executable(app main.cpp foo.cpp)
