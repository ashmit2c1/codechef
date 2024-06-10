#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        string s;
        cin >> s;
        int n = s.length();
        int count=0;
        for(int i = 0; i<n-1; i++){
            if(s[i]!=s[i+1]){
                count++;
            }
        }
        if(s[0]=='0'){
            cout << count + 1 << "\n";
        }
        else{
            cout << count << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}