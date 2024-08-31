#include <bits/stdc++.h>
using namespace std;

void dfsFunction(int node,vector<bool>&visited,int&leafCount,vector<int>adj[]){
    visited[node]=true;bool isLeave=true;int n=adj[node].size();
    for(int i=0;i<n;i++){
        int neighbor=adj[node][i];
        if(visited[neighbor]==false){
            isLeave=false;
            dfsFunction(neighbor,visited,leafCount,adj);
        }
    }
    if(isLeave==true){
        leafCount++;
    }
}

int findLeafNodes(int V,vector<int>adj[]){
    vector<bool>visited(V+1,false);
    int start=1;int leafCount=1;
    dfsFunction(start,visited,leafCount,adj);
    return leafCount;
}

int main() {
    int n;cin >> n;
    vector<int>tree[n+1];
    for(int i=0;i<n;i++){
        int u; int v;
        cin >> u >> v;
        tree[u].push_back(v);
    }
    int ans=findLeafNodes(n,tree);
    cout << ans << "\n";
    
}
