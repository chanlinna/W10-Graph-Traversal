#ifndef DFS_HPP
#define DFS_HPP

#include <iostream>
#include <map>
#include <list>
#include <stack>
using namespace std;

class DFS {
public:
    void performDFS(map<int, list<int>>& adjList, int startVertex) {
        map<int, bool> visited;
        stack<int> s;

        s.push(startVertex);
        visited[startVertex] = true;

        cout << "DFS(" << startVertex << "): ";

        while (!s.empty()) {
            int currentVertex = s.top();
            s.pop();
            cout << currentVertex << " ";

            // Visit all unvisited neighbors
            for (int neighbor : adjList[currentVertex]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    s.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

#endif 