cmake_minimum_required(VERSION 3.17)
project(Lucene_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lucene_cpp main.cpp store/DataOutput.cpp store/DataOutput.h)