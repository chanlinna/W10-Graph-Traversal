#include "Graph.hpp"
#include "DFS.hpp"
#include "BFS.hpp"

int main() {
    Graph g;

    // Add edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);

    cout << "Adjacency List: " << endl; 
    g.Display();

    // Create instances of DFS and BFS
    DFS dfs;
    BFS bfs;

    // Perform DFS and BFS
    dfs.performDFS(g.getAdjList(), 0);  
    bfs.performBFS(g.getAdjList(), 0);  

    return 0;
}
