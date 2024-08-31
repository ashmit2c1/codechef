#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";

void dfsFunction(int node,int parent,int d,vector<bool>&visited,int&maxDepth,vector<int>adj[]){
    visited[node]=true;int n=adj[node].size();
    maxDepth=max(maxDepth,d);
    forloop(0,n){
        int neighbor=adj[node][i];
        if(visited[neighbor]==false){
            dfsFunction(neighbor,node,d+1,visited,maxDepth,adj);
        }
    }
}
int findDepth(int V,vector<int>adj[]){
    vector<bool>visited(V+1,false);
    int maxDepth=0;dfsFunction(1,-1,0,visited,maxDepth,adj);
    return maxDepth;
}

void solution(){
    int n;cin >> n;
    vector<int>tree[n+1];
    forloop(0,n-1){
        int u;int v;cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    int ans=findDepth(n,tree);
    print(ans)

}
int main(){

    solution();
}