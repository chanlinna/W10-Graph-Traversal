#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <map>
#include <list>
using namespace std;

class Graph {
    map<int, list<int>> adjList;

public:
    void addEdge(int u, int v, bool isDirected = false) {
        adjList[u].push_back(v);
        if (!isDirected) {
            adjList[v].push_back(u);
        }
    }
    void Display(){
        for(auto i: adjList){
            cout << i.first<<" -> ";
            for(auto j: i.second){
            
                cout << j << " ";
            }
            
            cout << endl;
        }
    }

    map<int, list<int>>& getAdjList() {
        return adjList;
    }
};

#endif 
