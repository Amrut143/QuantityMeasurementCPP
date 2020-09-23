cmake_minimum_required(VERSION 3.18.2) 

project(QuantityMeasurementCPP)

add_subdirectory(lib/googletest)

include_directories(lib/googletest/include)

add_executable(executeTests main/model/Feet.cpp main/model/Feet.h test/FeetTest.cpp)

target_link_libraries(executeTests PRIVATE gtest)