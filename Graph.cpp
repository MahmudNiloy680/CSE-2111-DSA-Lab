#include <bits/stdc++.h>
using namespace std;
class Graph {
private:
    int numVertices;
    vector<vector<int>> adjMatrix;
public:
    Graph(int vertices) {
        numVertices = vertices;
        adjMatrix.resize(vertices, vector<int>(vertices, 0));
    }
    void addEdge(int u, int v) {
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1;
        }
    }
    void removeEdge(int u, int v) {
        if (u >= 0 && u < numVertices && v >= 0 && v < numVertices) {
            adjMatrix[u][v] = 0;
            adjMatrix[v][u] = 0;
        }
    }
    void display() {
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << "\n";
        }
    }
};
int main() {
    int vertices = 4;
    Graph g(vertices);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    cout << "Adjacency Matrix:\n";
    g.display();
    return 0;
}
