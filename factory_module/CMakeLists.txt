
# message(STATUS "CMake: Factory")
# cmake_minimum_required(VERSION 3.0.0)

# project(FactoryLib VERSION 1.0.1 DESCRIPTION "Factory Description")
# set(CMAKE_BUILD_TYPE Release)

# include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
# add_library(FactoryLib Module src/factoryLib.cpp)

# set_target_properties(FactoryLib PROPERTIES VERSION ${PROJECT_VERSION})
# set_target_properties(FactoryLib PROPERTIES PUBLIC_HEADER include/factoryLib.h)
# target_include_directories(FactoryLib PRIVATE include)
# target_include_directories(FactoryLib PRIVATE src)
# # Install library
# install(TARGETS FactoryLib
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
# install(FILES ${CMAKE_BINARY_DIR}/FactoryLib.pc
#     DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)


# cmake_minimum_required(VERSION 3.5)
# project(MyModuleLibrary)

# # Define the source files for the library
# set(SOURCES
#     src/factoryLib.cpp
# )

# # Create the library with the Module option
# add_library(MyModuleLibrary MODULE ${SOURCES})

# # Set include directories for the library
# target_include_directories(MyModuleLibrary
#     PUBLIC
#     include
# )

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

