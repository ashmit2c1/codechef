#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        vector<int> priceCharacter(26);
        for(int i = 1; i<=26 ; i++){
            priceCharacter.push_back(i);
        }
        string s;
        cin >> s;
        int  n = s.length();
        int cost=0;
        for(int i='a';i<='z';i++){
            bool flag = false;
            for(int j = 0; j<n ; i++){
                if(i==s[j]){
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                cost+=priceCharacter[i-'a'];
            }
        }
        cout << cost << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}