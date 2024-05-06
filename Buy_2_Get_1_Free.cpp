#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        int x;
        cin >> n >> x;
        int fac = n/3;
        cout << (n-fac)*x << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}