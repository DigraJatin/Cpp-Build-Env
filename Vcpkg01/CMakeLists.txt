cmake_minimum_required(VERSION 3.20)
project(VCPKG01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Let CMake find fmt via vcpkg
find_package(fmt CONFIG REQUIRED)

add_executable(VCPKG01
    src/main.cpp
)

target_link_libraries(VCPKG01 PRIVATE fmt::fmt)
