#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        string s;
        cin >> s;
        int n = s.length();
        bool flag= false;
        for(int i = 0; i<n-2; i++){
            if((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') || (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')){
                flag = true;
                break;
            }
        }
        if(flag==true){
            cout << "Good" << "\n";
        }
        else{
            cout << "Bad" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}