#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        float u,v,a,s;
        cin >> u >> v >> a >> s;
        float speed = sqrt(u*u - 2*a*s);
        if(speed>v){
            cout << "No" <<"\n";
        }
        else{
            cout << "Yes" << "\n";
        }


    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}