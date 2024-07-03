#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n,x,k;
        cin >> n >> x >> k;
        int g = n-x;
        int girlRem = g%k;
        int boyRem = x%k;
        cout << abs(girlRem-boyRem) << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}