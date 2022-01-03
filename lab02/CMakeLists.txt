cmake_minimum_required(VERSION 3.19)
project(MAI_OOP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(EXMPL
        time.cpp
        time.h main.cpp)