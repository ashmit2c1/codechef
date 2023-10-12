#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int x;
        int y;
        cin >> x >> y;
        if(2*y>(15*x)){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}