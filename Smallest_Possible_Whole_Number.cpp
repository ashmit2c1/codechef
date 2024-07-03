#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n,k;
        cin >> n >> k;
        if(k==0){
            cout << n << "\n";
        }
        else{
            cout << n%k << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}