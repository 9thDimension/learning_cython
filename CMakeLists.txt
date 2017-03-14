cmake_minimum_required(VERSION 3.6)
project(learning_cython_hello_world)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp HelloWorlder.cpp HelloWorlder.h)
add_executable(learning_cython_hello_world ${SOURCE_FILES})