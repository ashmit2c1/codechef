#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,b,c;
        cin >> a >> b >> c;
        if((a*b)<0 || (b*c)<0 || (a*c)<0){
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