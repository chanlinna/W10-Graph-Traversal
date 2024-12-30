#ifndef BFS_HPP
#define BFS_HPP

#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

class BFS {
public:
    void performBFS(map<int, list<int>>& adjList, int startVertex) {
        map<int, bool> visited;
        queue<int> q;

        visited[startVertex] = true;
        q.push(startVertex);

        cout << "BFS(" << startVertex << "): ";

        while (!q.empty()) {
            int currentVertex = q.front();
            q.pop();
            cout << currentVertex << " ";

            // Visit all unvisited neighbors
            for (int neighbor : adjList[currentVertex]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

#endif 
