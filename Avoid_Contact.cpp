#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x,y;
        cin >>x >> y;
        if(x==y){
            cout << (x*2)-1 << "\n";
        }
        else{
            cout << (y*2)+x-y << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}