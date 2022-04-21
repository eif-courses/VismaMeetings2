cmake_minimum_required(VERSION 3.21)
project(VismaMeetings)

set(CMAKE_CXX_STANDARD 14)

add_executable(VismaMeetings main.cpp Meeting.cpp Meeting.h Person.cpp Person.h VismaMeetings.cpp VismaMeetings.h)
