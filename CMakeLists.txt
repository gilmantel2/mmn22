# cmake_minimum_required(VERSION <specify CMake version here>)
project(mmn22 C)

set(CMAKE_C_STANDARD 90)
add_executable(Assignment-1 mycomp.c complex.c)
add_executable(Assignment-1_test test.c complex.c)