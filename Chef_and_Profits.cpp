#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x,y,z;
        cin >> x >> y >> z;
        int cost = x*y;
        int sell = x*z;
        cout << sell - cost << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}