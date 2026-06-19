#include "bfs.hpp"
#include "input.hpp"

int main(int, char**){
    Input i;
    Bfs d;
  // Input
  /*
    9 9
    1 2
    1 3
    1 5
    2 4
    3 6
    3 7
    3 9
    5 8
    8 9
  */

  std::vector<int> adj[1001];
  std::array<bool, 1001> visited;
  visited.fill(false);

  i.inp(adj, 1, 9);
  d.BreadthFirstSearch(adj, visited, 1);
  return EXIT_SUCCESS;
}
