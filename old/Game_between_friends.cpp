#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a>=b){
            b+=c;
        }
        else{
            a+=c;
        }
        if(a>=b){
            b+=d;
        }
        else{
            a+=d;
        }
        if(a>=b){
            cout << "N" << "\n";
        }
        else{
            cout << "S" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}