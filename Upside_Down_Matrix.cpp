#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n,m;cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;cin>>x;
            matrix[i][j]=x;
        }
    }
    vector<vector<int>>newMatrix(n,vector<int>(m,0));
    int k=0;
    for(int i=n-1;i>=0;i--){
        int l=0;
        for(int j=0;j<m;j++){
            newMatrix[k][l]=matrix[i][j];l++;
        }
        k++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << newMatrix[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(){

    solution();
}