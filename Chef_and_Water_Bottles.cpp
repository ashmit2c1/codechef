#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--){
        int n,x,k;
        cin >> n >> x >> k;
        if((k/x)>n){
            cout << n << endl;
        }
        else{
            cout << (k/x) << endl;
        }
    }
}