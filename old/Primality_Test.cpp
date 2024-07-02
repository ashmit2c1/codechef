#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x;
        cin >> x;
        int i=2;
        for(i=2;i<=x;i++){
            if(x%i==0){
                break;
            }
        }
        if(i==x){
            cout << "yes" << "\n";
        }
        else{
            cout << "no" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}