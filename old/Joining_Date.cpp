#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n ;
        int k ;
        cin >> n >> k;
        cout << ceil(n/5.0)-ceil(k/5.0) << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}