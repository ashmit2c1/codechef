#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x;
        cin >> x;
        if(x==1){
            cout << 1 << "\n";
        }
        else{
            cout << x/2 + 1 << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}