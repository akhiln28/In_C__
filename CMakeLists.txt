cmake_minimum_required(VERSION 3.7)
project(In_C__)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES test1.cpp Graphs/Graph.cpp Graphs/Graph.h)
add_executable(In_C__ ${SOURCE_FILES})