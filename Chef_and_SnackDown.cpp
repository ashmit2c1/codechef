#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x;
        cin >> x;
        if(x==2010 || x==2015 || x==2019 || x==2017 || x==2016){
            cout << "HOSTED" << "\n";
        }
        else{
            cout << "NOT HOSTED" << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}