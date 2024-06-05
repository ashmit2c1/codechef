#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int d,l,r;
        cin >> d >> l >> r;
        if(d>=l && d<=r){
            cout << "Take second dose now" <<"\n";
        }
        else if(d<l){
            cout << "Too Early" << "\n";
        }
        else{
            cout << "Too Late" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}