cmake_minimum_required(VERSION 3.18.2) 

project(QuantityMeasurementCPP)

add_subdirectory(lib/googletest)

include_directories(lib/googletest/include)

add_executable(executeTests main/model/Length.cpp main/model/Length.h main/utility/Unit.cpp main/utility/Unit.h
                 test/LengthTest.cpp)

target_link_libraries(executeTests PRIVATE gtest)