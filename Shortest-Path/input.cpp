#include "input.hpp"
#include <iostream>

void Input::inp(std::vector<int> adj[1001]) {
    int vertex, edge;
    std::cin >> vertex >> edge;

    for (int i = 0; i < edge; i++) {
        int x, y;
        std::cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}