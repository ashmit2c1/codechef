#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x, y) for(int i = x; i < y; i++)
#define secondfor(x,y) for(int j=x ; j <y ; j++)
#define print(x) cout << x << "\n";
bool check(int V, vector<int> adj[], vector<int>& topOrder) {
    vector<int> inDegree(V, 0);
    forloop(0, V) {
        for (int neighbor : adj[i]) {
            inDegree[neighbor]++;
        }
    }
    queue<int> q;
    forloop(0, V) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topOrder.push_back(node);
        for (int neighbor : adj[node]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }
    return topOrder.size() != V;
}

void solution() {
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    forloop(0, m) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vector<int> topOrder;
    if (check(n, adj, topOrder)) {
        cout << -1 << "\n";
        return;
    }
    forloop(1,topOrder.size()){
        secondfor(0,i){
            cout << topOrder[i] << " ";
        }
        cout << "\n";
    }
}
int main() {
    solution();
    return 0;
}