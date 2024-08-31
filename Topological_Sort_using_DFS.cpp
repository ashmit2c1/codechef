#include <bits/stdc++.h>
using namespace std;

bool detectCycle(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& inStack) {
    visited[node] = true;
    inStack[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor] && detectCycle(neighbor, adj, visited, inStack)) {
            return true;
        } else if (inStack[neighbor]) {
            return true;
        }
    }

    inStack[node] = false;
    return false;
}

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& topologicalOrder) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, topologicalOrder);
        }
    }
    topologicalOrder.push_back(node);
}

vector<int> topologicalSort(int n, vector<vector<int>>& adj) {
    vector<bool> visited(n, false);
    vector<bool> inStack(n, false);
    vector<int> topologicalOrder;

    // Check for cycles in the graph
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (detectCycle(i, adj, visited, inStack)) {
                return {};  // Return an empty vector if a cycle is detected
            }
        }
    }

    // Perform DFS and generate topological order
    fill(visited.begin(), visited.end(), false);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited, topologicalOrder);
        }
    }

    reverse(topologicalOrder.begin(), topologicalOrder.end());
    return topologicalOrder;
}

void solution() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u - 1].push_back(v - 1);  // Adjust to zero-based index
    }

    vector<int> topologicalOrder = topologicalSort(n, adj);

    if (topologicalOrder.empty()) {
        cout << "-1\n";  // Output -1 if the graph contains a cycle
    } else {
        for (int x : topologicalOrder) {
            cout << x + 1 << " ";  // Adjust back to one-based index for output
        }
        cout << "\n";
    }
}

int main() {
    solution();
    return 0;
}