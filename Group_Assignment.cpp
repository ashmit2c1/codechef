#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        int x;
        cin >> n >> x;
        int totStudents = 2*n;
        int ans = totStudents+1-x;
        cout << ans << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}