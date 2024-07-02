#include <bits/stdc++.h>
using namespace std;

void solution(int test){
    while(test--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        string ans;
        for(int i = 0; i < n; i++){
            if(s[i] != '.'){
                ans += s[i];
            }
        }

        int len = ans.size();
        bool flag = true;
        if(len == 0){
            flag = true;
        }
        else if(len % 2 == 1 || len == 1){
            flag = false;
        }
        else {
            for(int i = 0; i < len; i += 2){
                if(ans[i] != 'H' || ans[i+1] != 'T'){
                    flag = false;
                    break;
                }
            }
        }

        if(flag){
            cout << "Valid" << "\n";
        }
        else{
            cout << "Invalid" << "\n";
        }
    }
}

int main(){
    int test;
    cin >> test;
    solution(test);
    return 0;
}
