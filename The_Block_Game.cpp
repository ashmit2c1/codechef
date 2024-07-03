#include<bits/stdc++.h>
using namespace std;

void solution(int test){
    while(test--){
        string s;
        cin >>s;
        string ans="";
        int n=s.size();
        for(int i =n-1;i>=0;i--){
            ans+=s[i];
        }
        if(s==ans){
            cout << "wins" << "\n";
        }
        else{
            cout << "loses" << "\n";
        }
    }
}

int main(){
    int test;
    cin >> test;
    solution(test);
}