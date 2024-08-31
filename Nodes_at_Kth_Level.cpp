#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";


void dfsFunction(int node,int parent,int k,int level,vector<int>&ans,vector<bool>&visited,vector<int>adj[]){
    visited[node]=true;int n=adj[node].size();
    if(level==k){ans.push_back(node);}
    forloop(0,n){
        int neighbor=adj[node][i];
        if(visited[neighbor]==false){
            dfsFunction(neighbor,node,k,level+1,ans,visited,adj);
        }
    }
}
vector<int>findNodesOrder(int V,vector<int>adj[],int k){
    vector<int>ans;vector<bool>visited(V+1,false);
    int start=1;dfsFunction(1,-1,k,0,ans,visited,adj);
    return ans;
}
void solution(){
    int n;cin >> n;int k;cin >> k;
    vector<int>tree[n+1];
    forloop(0,n-1){
        int u;int v;cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    vector<int>ans=findNodesOrder(n,tree,k);
    sort(ans.begin(),ans.end());
    forloop(0,ans.size()){
        cout << ans[i] << " ";
    }

}
int main(){

    solution();
}