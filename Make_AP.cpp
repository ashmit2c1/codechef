#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,c;
        cin >> a >> c;
        if((a+c)%2==0){
            cout << (a+c)/2 << endl;
         }
         else{
            cout << -1 << endl;
         }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}