#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        bool yes=false;
        if((n%7)%2!=0 && n<7){
            cout << "NO " <<"\n";
        }
        else{
            cout << "YES" << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}