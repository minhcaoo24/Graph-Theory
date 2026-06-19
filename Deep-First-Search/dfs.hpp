#pragma once
#include <array>
#include <vector>

class Dfs {
public:
    void DeepFirstSearch(const std::vector<int> adj[1001], std::array<bool, 1001>& visited, int s);
};