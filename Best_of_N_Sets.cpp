#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x,y;
        cin >> x >> y;
        int n = max(x,y);
        cout << 2*n - 1 << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}