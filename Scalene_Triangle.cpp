#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a!=b && b!=c && a!=c){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}