#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        int m;
        cin >> n >> m;
        int total_shoes = 2*n;
        if(n<m){
            cout << n << endl;
        }
        else 
        {
            cout << total_shoes-m << endl;
        }

    }
}