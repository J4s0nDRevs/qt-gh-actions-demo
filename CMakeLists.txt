cmake_minimum_required(VERSION 3.14)
project(QtCIApp)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 REQUIRED COMPONENTS Widgets Test)

# ---- Your main app ----
add_executable(QtCIApp main.cpp)
target_link_libraries(QtCIApp Qt6::Widgets)

# ---- Testing Setup ----
enable_testing()

add_executable(QtTests test_main.cpp)
target_link_libraries(QtTests Qt6::Test)
add_test(NAME QtTests COMMAND QtTests)
