#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;int m;cin>>n>>m;
    vector<vector<int>>matrix1(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin >> x;
            matrix1[i][j]=x;
        }
    }
    vector<vector<int>>matrix2(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin >> x;
            matrix2[i][j]=x;
        }
    }
    vector<vector<int>>matrix3(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << matrix3[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(){

    solution();
}