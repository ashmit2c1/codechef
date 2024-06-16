#include<bits/stdc++.h>
using namespace std;
#define len length();
void solution(int test){
    while(test--){
        string s;
        cin >> s;
        int count=0;
        int n = s.len
        for(int i = 0; i<n ; i++){
            if(s[i]=='4'){
                count++;
            }
        }
        cout << count << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}