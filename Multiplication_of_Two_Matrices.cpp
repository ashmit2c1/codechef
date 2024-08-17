#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;int m;cin>>n>>m;
    vector<vector<int>>matrix1(n,vector<int>(m,0));
    for(int i = 0; i<n ; i++){
        for(int j=0;j<m;j++){
            int x;cin>>x;matrix1[i][j]=x;
        }
    }
    int a;int b;cin>>a>>b;
    vector<vector<int>>matrix2(a,vector<int>(b,0));
    for(int i = 0; i<a ; i++){
        for(int j = 0; j<b ; j++){
            int x;cin>>x;matrix2[i][j]=x;
        }
    }
    if(m!=a){
        return;
    }
    vector<vector<int>>matrix3(n,vector<int>(b,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<b;j++){
            int value=0;
            for(int k = 0; k<a ; k++){
                value+=matrix1[i][k]*matrix2[k][j];
            }
            matrix3[i][j]=value;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<b;j++){
            cout << matrix3[i][j] << " ";
        }
        cout << "\n";
    }

}
int main(){

    solution();
}