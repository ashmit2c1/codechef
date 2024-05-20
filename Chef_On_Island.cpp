#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x,y,xR,yR,D;
        cin >> x >> y >> xR >> yR >>D;
        int dayx = x/xR;
        int dayy = y/yR;
        int day = min(dayx,dayy);
        if(day>=D){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}