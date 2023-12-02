#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x,y;
        cin >> x >> y;
        if(y>x){
            cout << 2*(y-x) + x << endl;
        }
        else{
            cout << y << endl;
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}