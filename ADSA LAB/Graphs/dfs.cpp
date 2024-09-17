#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Graph {
private:
    int V; 
    vector<vector<int>> adjList; 

public:
    
    Graph(int V) : V(V) {
        adjList.resize(V);
    }

    
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        
        
    }

    
    void dfs(int start) {
        vector<bool> visited(V, false);
        stack<int> s;
        s.push(start);

        while (!s.empty()) {
            int node = s.top();
            s.pop();

            if (visited[node]) {
                continue;
            }

            visited[node] = true;
            cout << node << " ";

            
            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    int V = 5; 
    Graph g(V);

    
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);

    cout << "DFS Traversal starting from node 0:" << endl;
    g.dfs(0);

    return 0;
}
