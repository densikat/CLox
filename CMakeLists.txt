cmake_minimum_required(VERSION 3.25)
project(CLox C)

set(CMAKE_C_STANDARD 11)

add_executable(CLox main.c common.h chunk.h)
