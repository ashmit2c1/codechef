#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x;
        int y;
        cin >> x >> y;
        int sum = x+y;
        if(sum%2==0){
            cout << "Bob" << "\n";
        }
        else{
            cout << "Alice" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}