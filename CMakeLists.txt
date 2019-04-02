cmake_minimum_required(VERSION 3.3)
project(padleft CXX)

set(CMAKE_CXX_STANDARD 14)

add_library(padleft src/padleft.cpp)
target_include_directories(padleft PUBLIC include)

add_subdirectory(test)