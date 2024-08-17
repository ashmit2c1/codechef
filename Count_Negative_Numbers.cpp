#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n,m;cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m,0));
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<m ; j++){
            int x;cin>>x;matrix[i][j]=x;
        }
    }
    int cnt=0;
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<m ; j++){
            if(matrix[i][j]<0){cnt++;}
        }
    }
    cout << cnt << "\n";

}
int main(){

    solution();
}