#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x;
        cin >> x;
        x = x%4;
        if(x==1){
            cout << "East" << "\n";
        }
        else if(x==2){
            cout << "South" << "\n";
        }
        else if(x==3){
            cout << "West" << "\n";
        }
        else{
            cout << "North" << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}