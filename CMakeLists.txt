cmake_minimum_required(VERSION 3.20)
project(memory-region-tree)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(memory-region-tree
    src/main.cpp
    src/node/node.cpp
)
