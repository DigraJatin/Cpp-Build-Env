cmake_minimum_required(VERSION 3.20)

project(RestApiDemo VERSION 1.0 LANGUAGES CXX)

add_executable(RestApiDemo main.cpp)

# C++ standard
set_property(TARGET RestApiDemo PROPERTY CXX_STANDARD 17)

# Tell the compiler where to find httplib.h and json.hpp
# path here should match where the file is located in your project
target_include_directories(RestApiDemo PRIVATE ${CMAKE_SOURCE_DIR}/ThirdPartyCode)
