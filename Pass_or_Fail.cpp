#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        int x;
        int p;
        cin >> n >> x >> p;
        int tot = 3*n;
        int wro = 4*(n-x);
        int pass = tot-wro;
        if(pass>=p){
            cout << "PASS" << endl;
        }
        else{
            cout << "FAIL" << endl;
        }
    }
}