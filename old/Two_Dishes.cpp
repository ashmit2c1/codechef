#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n,a,b,c;
        cin >> n >> a >> b >> c;
        if(b>=n && a+c>=n){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" <<"\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}