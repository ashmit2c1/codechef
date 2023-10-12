#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int x,y,d;
        cin >> x >> y >> d;
        int diff = abs(x-y);
        if(diff>d){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}