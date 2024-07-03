#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,b;
        cin >> a >> b;
        if(a==b){
            cout << "YES" << "\n";
        }
        else{
            int diff = abs(a-b);
            if(diff%2==0){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}