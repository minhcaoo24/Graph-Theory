#include "dfs.hpp"
#include <iostream>

void Dfs::DeepFirstSearch(const std::vector<int> adj[1001], std::array<bool, 1001>& visited, std::array<int, 1001>& parent, int s) {
    std::cout << s << " ";
    visited[s] = true;
    for(auto v : adj[s]){
        if(!visited[v]) {
            parent[v] = s;
            DeepFirstSearch(adj, visited, parent, v);
        }
    }
}