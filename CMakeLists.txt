cmake_minimum_required(VERSION 3.10)
project(MyCProject C)

set(CMAKE_C_STANDARD 99)

include_directories(include)

add_executable(my_c_project main.c src/hello.c)
