#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        string s;
        cin >> s;
        int n = s.length();
        bool flag = false;
        for(int i = 0; i<n ; i+=2){
            if((s[i]=='A'&&s[i+1]=='A') || (s[i]=='B'&&s[i+1]=='B')){
                flag = true;
                break;
            }
        }
        if(flag == true){
            cout << "no" << '\n';
        }
        else{
            cout << "yes" << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}