cmake_minimum_required(VERSION 3.10)
project(class_template)

# message(${PROJECT_SOURCE_DIR})

# Set the main target name to the project name, can be changed if needed.
set(MAIN_TARGET_NAME ${PROJECT_NAME})

include_directories(
        ${PROJECT_SOURCE_DIR}/include
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

# dynamic lib
add_library(${MAIN_TARGET_NAME}_lib SHARED ${PROJECT_SOURCE_DIR}/src/class_temp_abstract_header.cpp)

# Targer for the library example program
add_executable(${MAIN_TARGET_NAME}_executable ${PROJECT_SOURCE_DIR}/src/class_temp_abstract_header_main.cpp)

set_target_properties(${MAIN_TARGET_NAME}_lib PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${${PROJECT_NAME}_SOURCE_DIR}/lib)

# Link the library target to the cse library and the testing target to library.
target_link_libraries(${MAIN_TARGET_NAME}_executable ${MAIN_TARGET_NAME}_lib)