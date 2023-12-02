#include<bits/stdc++.h>
using namespace std;
void solution(int n){
    while(n--){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        if(y-x > 2*z){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}