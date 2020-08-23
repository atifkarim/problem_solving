# This link helps tpo do it: https://stackoverflow.com/questions/8304190/cmake-with-include-and-source-paths-basic-setup
# FOllow this also : https://github.com/NEGU93/ForbiddenDesert/blob/master/CMakeLists.txt

cmake_minimum_required(VERSION 3.5)
#project(do_sum_include_dir)
#include_directories(${PROJECT_SOURCE_DIR}/include)
#include_directories(${/home/atif/do_sum_include_dir/include})
#set(SOURCES /home/atif/do_sum_include_dir/src/*.cpp)
#add_library(applib foo.cpp)
#add_executable(app ${PROJECT_SOURCE_DIR}/src/main.cpp)
#add_executable(app ${"/media/atif/BE0E05910E0543BD/University of Bremen MSc/problem_solving/project_cmake/do_sum_include_dir/src/main.cpp"})
#add_executable(app ${SOURCES})
#target_link_libraries(app)


project(do_sum_include_dir)
#add_subdirectory(include)
#add_subdirectory(src)
#add_library(sum foo.cpp) # if want to use this repo as a library for others. It generates library
#target_include_directories(do_sum PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}) # this line helps to add other repo's path if needed for this current repo
#add_executable(dosum main.cpp)
#target_link_libraries(dosum LINK_PUBLIC sum) # this one needed if this current repo want to use other repo which is already made as lib(see line 16. here it just showing as a mimic)

include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/src
)

file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/include/*.h"
        "${PROJECT_SOURCE_DIR}/include/*.hpp"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/*.c"
        )

add_executable(do_sum ${all_SRCS})
message($HELLO_Developer_next_line_will_print_the_PATH)
message(${PROJECT_SOURCE_DIR})
set(CMAKE_VERBOSE_MAKEFILE on)