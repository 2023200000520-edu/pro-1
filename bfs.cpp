#include <bits/stdc++.h>
using namespace std;

void BFS(vector<vector<int>>& adj, int s, int V) {
    vector<string> color(V, "white");
    vector<int> d(V, INT_MAX);
    vector<int> pred(V, -1);



    /// Complete the code here



    // Printing the BFS results
    cout << "Vertex  Distance  Predecessor\n";
    for (int i = 0; i < V; i++) {
        cout << i << "\t";
        if (d[i] == INT_MAX) cout << "INF\t";
        else cout << d[i] << "\t";
        if (pred[i] == -1) cout << "NULL\n";
        else cout << pred[i] << "\n";
    }
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> adj(V);

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // remove this line if graph is directed
    }

    int source;
    cout << "Enter source vertex: ";
    cin >> source;

    BFS(adj, source, V);

    return 0;
}
