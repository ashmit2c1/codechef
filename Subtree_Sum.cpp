#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";


void dfsFunction(int node,vector<bool>&visited,vector<int>&ans,vector<int>adj[]){
    visited[node]=true;int n=adj[node].size();
    ans[node]+=node;
    forloop(0,n){
        int neighbor=adj[node][i];
        if(visited[neighbor]==false){
            dfsFunction(neighbor,visited,ans,adj);
            ans[node]+=ans[neighbor];
        }
    }
}

vector<int>subTreeSum(int V,vector<int>adj[]){
    vector<bool>visited(V+1,false);
    vector<int>ans(V+1);
    int start=1;dfsFunction(start,visited,ans,adj);
    return ans;
}

void solution(){
    int n;
    cin >> n;
    vector<int>tree[n+1];
    forloop(0,n-1){
        int u;int v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    vector<int>ans=subTreeSum(n,tree);
    forloop(1,ans.size()){
        cout << ans[i] << " ";
    }

}
int main(){

    solution();
}