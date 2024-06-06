#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int w1,w2,x1,x2,m;
        cin >> w1 >> w2 >> x1 >> x2 >> m ;
        int diff = w2-w1;
        int X1 = m*x1;
        int X2 = m*x2;
        if(diff >= X1 && diff<=X2 ){
            cout << 1 << "\n";
        }
        else{
            cout << 0 << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}