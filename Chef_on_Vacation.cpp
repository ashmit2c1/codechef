#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x,y,z;
        cin >> x >> y >> z;
        int tot = x+y;
        if(tot>z){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}