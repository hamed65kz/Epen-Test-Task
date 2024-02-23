cmake_minimum_required(VERSION 3.19...3.28)
project(epen_test VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_CXX_EXTENSIONS Off)

# Define headers and sources
set(HEADER_FILES
    src/Shape.h
    src/Fruits.h
)

add_executable(${PROJECT_NAME}  main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE factory_module)

