cmake_minimum_required(VERSION 3.14)
project(QtCIApp)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(QtCIApp main.cpp)
target_link_libraries(QtCIApp Qt6::Widgets)
