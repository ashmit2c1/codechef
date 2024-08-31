#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x, y) for (int i = x; i < y; i++)
#define secondfor(x, y) for (int j = x; j < y; j++)
#define print(x) cout << x << "\n";

bool checkForCycle(int node, vector<bool>& visited, vector<bool>& path, vector<int> adj[]) {
    visited[node] = true;
    path[node] = true;
    int n = adj[node].size();
    for (int i = 0; i < n; i++) {
        int neighbor = adj[node][i];
        if (path[neighbor]) return true;
        if (!visited[neighbor]) {
            if (checkForCycle(neighbor, visited, path, adj)) return true;
        }
    }
    path[node] = false;
    return false;
}

bool findCycle(int V, vector<int> adj[]) {
    vector<bool> visited(V, false);
    vector<bool> path(V, false);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (checkForCycle(i, visited, path, adj)) return true;
        }
    }
    return false;
}

void solution() {
    int n, m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u - 1].push_back(v - 1);
    }
    bool ans = findCycle(n, adj);
    if (ans) {
        print("YES");
    } else {
        print("NO");
    }
}

int main() {
    solution();
    return 0;
}