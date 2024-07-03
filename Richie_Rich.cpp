#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,b,x;
        cin >> a >> b >> x;
        int cnt=0;
        while(a<=b){
            a+=x;
            cnt++;
        }
        cout << cnt-1 << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}