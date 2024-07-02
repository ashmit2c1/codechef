#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n,k;
        cin >> n >> k;
        if(n%k==0){
            cout << n/k << "\n";
        }
        else{
            cout << n/k + 1 << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}