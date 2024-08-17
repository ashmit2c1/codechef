#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    int sum = 0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(i==j || i==n-1-j) sum += arr[i][j];
     
    cout<<sum<<endl;
}
int main(){

    solution();
}