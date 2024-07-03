#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        string s;
        cin >> s;
        int n = s.length();
        int one=0;
        int zero=0;
        for(int i = 0; i<n ; i++){
            if(s[i]=='1'){
                one++;
            }
            else{
                zero++;
            }
        }
        if(one==1 || zero==1){
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