#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> g[], int s, int d) {
    g[s].push_back(d);
    g[d].push_back(s);
}

void dfs(vector<int> g[], vector<bool> &visited, int s) {
    visited[s] = true;
    cout << s << endl;
    for (auto nbr : g[s]) {
        if (!visited[nbr]) dfs(g, visited, nbr);
    }
}

int main() {
    int n = 7;
    vector<int> g[n];
    vector<bool> visited(n, 0);
    addEdge(g, 0, 1);
    addEdge(g, 1, 2);
    addEdge(g, 2, 3);
    addEdge(g, 3, 5);
    addEdge(g, 5, 6);
    addEdge(g, 4, 5);
    addEdge(g, 0, 4);
    addEdge(g, 3, 4);
    for (int v = 0; v < n; ++v) {
        cout << "Adjacency list of vertex " << v << "\n head ";
        for (auto x : g[v])
            cout << "-> " << x;
        cout << endl;
    }

    dfs(g, visited, 1);

    return 0;
}