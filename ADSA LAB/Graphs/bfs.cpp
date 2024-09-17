#include <iostream>
#include <vector>
#include <queue>

class Graph {
public:
    Graph(int vertices);
    void addEdge(int u, int v);
    void BFS(int start);

private:
    int vertices; 
    std::vector<std::vector<int>> adjList;
};

Graph::Graph(int vertices) {
    this->vertices = vertices;
    adjList.resize(vertices);
}

void Graph::addEdge(int u, int v) {
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}

void Graph::BFS(int start) {
    std::vector<bool> visited(vertices, false); // Track visited nodes
    std::queue<int> q; 
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        std::cout << node << " "; // Process the node

        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    std::cout << std::endl;
}

int main() {
    Graph g(6);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    std::cout << "BFS starting from vertex 0:" << std::endl;
    g.BFS(0);

    return 0;
}