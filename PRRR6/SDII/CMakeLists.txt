cmake_minimum_required(VERSION 3.29)
project(SDII)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SDII
    main.cpp
    Product.cpp
    Product.h
    Vector.h
    Vector.tpp)
