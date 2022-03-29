cmake_minimum_required(VERSION 3.5.1)
project (hello)
#SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -pthread")


find_package (Threads)
add_executable(hello hello.cpp)
#target_link_libraries (hello Threads::Threads)
target_link_libraries (hello ${CMAKE_THREAD_LIBS_INIT})

