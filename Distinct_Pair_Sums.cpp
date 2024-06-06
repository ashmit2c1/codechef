#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int left,right;
        cin >> left >> right;
        cout << 2*(abs(left-right))+1 << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}