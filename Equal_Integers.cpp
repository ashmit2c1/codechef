#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x,y;
        cin >> x >> y;
        if(x==y){
            cout << 0 << "\n";
        }
        else if(y>x)
        {
            cout << y-x << "\n";
        }
        else{
            int diff = (x-y);
            if(diff%2==0){
                cout << diff/2 << "\n";
            }
            else{
                cout << diff/2 + 2 << "\n";
            }
        }
    }\
}
int main(){
    int test;
    cin >> test;
    solution(test);
}