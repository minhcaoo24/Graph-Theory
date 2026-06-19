#include "bfs.hpp"
#include <queue>
#include <iostream>

void Bfs::BreadthFirstSearch(const std::vector<int> adj[1001], std::array<bool, 1001>& visited, std::array<int, 1001>& parent, int s) {
    std::queue<int> queue;
    queue.push(s);
    visited[s] = true;
    std::cout << s << " ";

    while(!queue.empty()) {
        int v = queue.front();
        queue.pop();
        for (auto u : adj[v]) {
            if(!visited[u]) {
                std::cout << u << " ";
                queue.push(u);
                visited[u] = true;
                parent[u] = v;
            }
        }
    }
    std::cout << std::endl;
}