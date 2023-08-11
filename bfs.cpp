#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> g[], int s, int d) {
    g[s].push_back(d);
    g[d].push_back(s);
}

void bfs(vector<int> g[], vector<bool>& visited, int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty()) {
        int node = q.front();
        cout << node << endl;
        q.pop();
        for (auto nbr : g[node]) {
            if (!visited[nbr]) {
                q.push(nbr);
                visited[nbr] = true;
            }
        }
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
    // for (int v = 0; v < n; ++v) {
    //     cout << "Adjacency list of vertex " << v << "\n head ";
    //     for (auto x : g[v])
    //         cout << "-> " << x;
    //     cout << endl;
    // }

    bfs(g, visited, 0);

    return 0;
}