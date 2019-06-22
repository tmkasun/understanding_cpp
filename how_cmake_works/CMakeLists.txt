cmake_minimum_required(VERSION 3.10)
project(sampleApp LANGUAGES CXX)
add_executable(sampleTarget ../compiling_and_linking/summer.cpp ../compiling_and_linking/test.cpp)

target_compile_options(sampleTarget PRIVATE -std=c++11)

if(CMAKE_ENABLE_DEBUG)
    message(STATUS "DEBUG enabled")
    target_compile_options(sampleTarget PRIVATE -g)
endif()