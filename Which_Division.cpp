#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x;
        cin >> x;
        if(x>=2000){
            cout << 1 << "\n";
        }
        else if(x>=1600 && x<2000){
            cout << 2 << "\n";
        }
        else{
            cout << 3 << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}