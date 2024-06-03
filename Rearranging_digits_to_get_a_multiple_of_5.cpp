#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        for(int i = 0; i<n ; i++){
            if(s[i]=='5' || s[i]=='0'){
                flag = true;
            }
        }
        if(flag==true){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}