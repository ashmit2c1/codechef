#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int x;
        int y;
        cin >> x >> y;
        if(x>y){
            cout << (x/y)+(x%y) << endl;
        }
        else if (x==y){
            cout << 1 << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
}