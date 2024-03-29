cmake_minimum_required(VERSION 3.19...3.28)

# Define project and language
project(factory_module LANGUAGES CXX)



set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_CXX_EXTENSIONS Off)

# Define headers and sources
set(HEADER_FILES
    src/factoryLib.h
    src/getType.h
)
set(SOURCE_FILES
    src/factoryLib.cpp
)

# Create the STATIC library
add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

# Set include directories
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

