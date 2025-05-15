cmake_minimum_required(VERSION 3.10)
project(windsurf)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable for each example
add_executable(variables src/variables.cpp)
add_executable(branches src/branches.cpp)
add_executable(loops src/loops.cpp)