cmake_minimum_required(VERSION 3.26.0)
project(Breadth-First-Search LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(Breadth-First-Search
    main.cpp 
    bfs.hpp
    bfs.cpp
    input.hpp
    input.cpp)