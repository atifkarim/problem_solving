# in this CMakeLists.txt file usage of /lib/*.so file, /include/*.h and /src/*.cpp files are shown
# when the code will be shipped to anyone only .so file(library file), header file will be shipped
# reciever will make own .cpp file(inside of /src folder)

project(do_process) # this is the project name
cmake_minimum_required(VERSION 3.10) # version for CMake

# Set the main target name to the project name, can be changed if needed.
set(MAIN_TARGET_NAME ${PROJECT_NAME}) # this variable will be used later in this CMake

# executable file path. After the usage of 'make' command in /bin foder executable file will be created
# output of /src/main.cpp will be seen here
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

# all header file supplied by the developer
include_directories(${PROJECT_SOURCE_DIR}/include)

# LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib)

# main.cpp file written by reciever by following the instructions of the /include/*.h file, .so file and
# the docs(will be written what are the functionality of the functions of the header file)
# reciever can extend the functionality also
add_executable(${MAIN_TARGET_NAME}_executable ${PROJECT_SOURCE_DIR}/src/main.cpp)

# link the .so file got from the developer. .so file name should be written by ownself
target_link_libraries(${MAIN_TARGET_NAME}_executable PRIVATE ${PROJECT_SOURCE_DIR}/lib/libdo_process_lib.so)