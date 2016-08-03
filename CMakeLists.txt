cmake_minimum_required(VERSION 3.5)
project(AllAboutC)

#[[set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")]]
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -std=c11 -std=c99")

set( $MyName = "Dennis Addo" )
set(SOURCE_FILES main.c)
add_executable(AllAboutC ${SOURCE_FILES})