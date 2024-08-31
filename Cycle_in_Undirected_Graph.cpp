#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";

bool checkForCycle(int node,int parent,vector<bool>&visited,vector<int>adj[]){
    visited[node]=true;int n=adj[node].size();
    forloop(0,n){
        int neighbor=adj[node][i];
        if(neighbor==parent){continue;}
        if(visited[neighbor]==true){return true;}
        if(visited[neighbor]==false){
            if(checkForCycle(neighbor,node,visited,adj)==true){return true;}
        }
    }return false;
}
bool findCycle(int V,vector<int>adj[]){
    vector<bool>visited(V,false);
    forloop(0,V){
        if(visited[i]==false){if(checkForCycle(i,-1,visited,adj)==true){return true;}}
    }return false;
}
void solution(){

    int n;int m;
    cin >> n >> m;
    vector<int>adj[n+1];
    forloop(0,m){
        int u;int v;cin >> u >> v;
        adj[u-1].push_back(v-1);adj[v-1].push_back(u-1);
    }
    bool ans = findCycle(n,adj);
    if(ans==true){print("YES")}
    else{print("NO")}
}
int main(){
    solution();
}

