#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int m,n;
        cin >> m >> n;
        int diff = abs(m-n);
        if(diff%2==0){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}