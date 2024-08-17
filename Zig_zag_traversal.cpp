#include<bits/stdc++.h>
using namespace std;

vector<int>zigZagTraversalMatrix(vector<vector<int>>&matrix){
    vector<int>ans;int n=matrix.size();int m=matrix[0].size();
    for(int i = 0; i<n ; i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                ans.push_back(matrix[i][j]);
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                ans.push_back(matrix[i][j]);
            }
        }
    }
    return ans;
    
}
void solution(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>>matrix(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;cin >>x;
            matrix[i][j]=x;
        }
    }
    vector<int>ans=zigZagTraversalMatrix(matrix);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}
int main(){

    solution();
}