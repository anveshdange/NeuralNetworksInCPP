cmake_minimum_required(VERSION 3.12)
project(nn)

set(CMAKE_BUILD_TYPE Debug) 
set(CMAKE_CXX_FLAGE "${CMAKE_CXX_FLAGS} -std=c++17") 

# main app 
add_executable(
    nn
    src/main.cpp 
    src/Neuron.cc 
    src/Layer.cc
    src/Matrix.cc
)