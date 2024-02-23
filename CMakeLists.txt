cmake_minimum_required(VERSION 3.19...3.28)
project(epen_test VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_CXX_EXTENSIONS Off)

add_subdirectory("factory_module")
add_subdirectory("sampleApp")

