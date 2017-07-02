cmake_minimum_required(VERSION 3.5)

add_definitions(-std=c++11)

project(MarkovLocalisation)

set(SOURCE src/main.cpp src/help_functions.hpp src/measurement_package.hpp src/map.hpp  src/bayesianfilter.cpp src/bayesianfilter.hpp)

add_executable(${PROJECT_NAME} ${SOURCE})
