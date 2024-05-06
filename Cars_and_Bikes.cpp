#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x;
        cin >> x;
        if(x<4){
            cout << "YES" << "\n";
        }
        else{
            if(x%4==0){
                cout << "NO" << "\n";
            }
            else{
                int diff = x-4;
                if(diff>=2){
                    cout << "YES" << "\n";
                }
                else{
                    cout << "NO" << "\n";
                }
            }
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}