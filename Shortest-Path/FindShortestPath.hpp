#pragma once
#include <vector>

class FindShortestPath {
public:
    void path(const std::vector<int> adj[1001], std::array<bool, 1001>& visited, std::array<int, 1001>& parent, int s, int t);
};