cmake_minimum_required(VERSION 3.27)
project(shape_processor)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp
        io.cpp
        Shape.h
        Circle.cpp
        Circle.h
        Rectangle.cpp
        Rectangle.h)
