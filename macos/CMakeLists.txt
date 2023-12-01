cmake_minimum_required(VERSION 3.25)

project(cat_command)

# Set up C++ compiler and language standard
set(CMAKE_CXX_STANDARD 20)

add_executable(cat_command cat.c)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)