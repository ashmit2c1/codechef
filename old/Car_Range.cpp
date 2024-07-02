#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int m,p,v;
        cin >> m >> p >> v;
        cout << abs((m-p-1)*v) << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}