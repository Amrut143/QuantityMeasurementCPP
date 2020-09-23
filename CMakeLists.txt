cmake_minimum_required(VERSION 3.18.2) 

project(QuantityMeasurementCPP)

add_subdirectory(lib/googletest)

include_directories(lib/googletest/include)

add_executable(executeTests main/model/QuantityMeasurement.cpp main/model/QuantityMeasurement.h 
main/utility/Unit.cpp main/utility/Unit.h main/utility/TypesOfUnit.h test/QuantityMeasurementTest.cpp)

target_link_libraries(executeTests PRIVATE gtest)