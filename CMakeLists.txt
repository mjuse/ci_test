
# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.0)

# Set the project name
project(HelloWorld)

enable_testing()

add_executable(main main.cpp utility.cpp utility.h) 

add_executable(unittest gtest/tests.cpp utility.cpp utility.h)
target_link_libraries(unittest gtest gtest_main)
add_test(unittest unittest)
