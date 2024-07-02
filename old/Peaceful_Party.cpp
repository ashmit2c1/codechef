#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,b,c;
        cin >> a >> b >> c;
        int total = a+c;
        if(total>=b){
            cout << total << "\n";
        }
        else{
            cout << b << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}