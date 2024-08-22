cmake_minimum_required(VERSION 3.22)
project(ayed_introduccion_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(ayed_introduccion_cpp
        main.cpp
        src/operaciones.cpp
        src/matriz.cpp
)