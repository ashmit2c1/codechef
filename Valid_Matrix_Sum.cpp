#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;int m;cin>>n>>m;
    if(n==1 && m==1){cout <<-1<<"\n";return;}
    if((n*m)%2!=0){cout <<-1<<"\n";return;}
    else{
        vector<vector<int>>matrix(n,vector<int>(m,1));
        for(int i = 0; i<n ; i++){
            for(int j=0;j<m;j++){
                cout << matrix[i][j] << " ";
            }cout << "\n";
        }
    }

}
int main(){

    solution();
}