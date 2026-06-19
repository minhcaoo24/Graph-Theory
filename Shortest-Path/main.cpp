#include "FindShortestPath.hpp"
#include "input.hpp"
#include <cstdlib>

int main(int, char**){
    std::vector<int> adj[1001];
    std::array<bool, 1001> visited;
    std::array<int, 1001> parent;
    Input i;
    i.inp(adj);
    FindShortestPath findPath;
    findPath.path(adj, visited, parent, 1, 7);
    return EXIT_SUCCESS;
}
