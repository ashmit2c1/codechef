#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        float x;
        float y;
        cin >> x >> y;
        float cut_off_time = x*1.07;
        if(y<=cut_off_time){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}