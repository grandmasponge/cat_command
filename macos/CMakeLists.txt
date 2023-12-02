cmake_minimum_required(VERSION 3.25)

project(cat_command)

# Set up C++ compiler and language standard
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${app_SOURCE_DIR}/cmake")
set(BIN_DIR ${app_SOURCE_DIR}/bin)


find_package(Curses REQUIRED)

include_directories(${CURSES_INCLUDE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(cat_command ${CMAKE_CURRENT_SOURCE_DIR}/src/cat.c)
target_link_libraries(cat_command ${CURSES_LIBRARY})


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)