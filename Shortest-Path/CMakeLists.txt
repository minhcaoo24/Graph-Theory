cmake_minimum_required(VERSION 3.26.0)
project(Shortest-Path LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(Shortest-Path 
    main.cpp
    input.hpp
    input.cpp
    dfs.hpp
    dfs.cpp
    bfs.hpp
    bfs.cpp
    FindShortestPath.hpp
    FindShortestPath.cpp
)

