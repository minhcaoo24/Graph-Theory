#include <algorithm>
#include <iostream>
#include "FindShortestPath.hpp"
#include "bfs.hpp"
// #include "dfs.hpp"

void FindShortestPath::path(const std::vector<int> adj[1001], std::array<bool, 1001>& visited, std::array<int, 1001>& parent, int s, int t) {
    visited.fill(false);
    parent.fill(0);

    Bfs b;
    b.BreadthFirstSearch(adj, visited, parent, s);

    /*
    Dfs d;
    d.DeepFirstSearch(adj, visited, parent, s);
    */

    if(!visited[t]) {
        std::cout << "Không thể tìm thấy đường" << std::endl;
    }
    else {
        std::vector<int> path;
        
        while(t != s) {
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        std::reverse(path.begin(), path.end());
        std::cout << "path: ";
        for (auto v : path) {
            std::cout << v << " ";
        }
    }
}