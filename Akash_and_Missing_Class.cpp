#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        if(n%7==6){
            cout << n/7 +1  << "\n";
        }
        else{
            cout << n/7 << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}