#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n,x;
        cin >> n >> x;
        string s;
        cin >> s;
        if(s[0]=='0'){
            cout << "NO" << "\n";
        }
        else{
            bool valid = true;
            int swipes = x;
            for(int i=1;i<n;i++){
                if(s[i]=='0'){
                    swipes--;
                }
                else{
                    swipes=x;
                }
                if(swipes<0){
                    valid = false;
                }
            }
            if(valid==false){
                cout << "NO" << '\n';
            }
            else{
                cout << "YES" << "\n";
            }
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}