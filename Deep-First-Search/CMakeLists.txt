cmake_minimum_required(VERSION 3.26.0)
project(Deep-First-Search LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(Deep-First-Search 
    main.cpp 
    dfs.hpp
    dfs.cpp
    input.hpp
    input.cpp)