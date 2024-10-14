cmake_minimum_required(VERSION 3.1)

project(task2)

set(SOURCE_EXE Source.cpp)
set(SOURCE_LIB calculator.cpp)

add_library(my_lib STATIC ${SOURCE_LIB})
add_executable(prog ${SOURCE_EXE})

target_link_libraries(prog my_lib)