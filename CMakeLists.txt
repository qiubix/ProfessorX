project(RomanNumeralConverter)
cmake_minimum_required(VERSION 2.6)

include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include)
link_directories($ENV{GMOCK_HOME}/build $ENV{GMOCK_HOME}/gtest/build)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall -pthread")
enable_testing()

set(sources
   main.cpp
   RomanConverterTest.cpp)
add_executable(RomanConverterTest ${sources})
target_link_libraries(RomanConverterTest pthread)
target_link_libraries(RomanConverterTest gmock)
target_link_libraries(RomanConverterTest gtest)
add_dependencies(RomanConverterTest gmock)
add_test(RomanConverterTest RomanConverterTest)
