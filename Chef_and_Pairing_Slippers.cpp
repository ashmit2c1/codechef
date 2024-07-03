#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n,l,x;
        cin >> n >> l >> x;
        int r = n-l;
        int s = min(l,r);
        cout << x*s << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}