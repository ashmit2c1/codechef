#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        string s;
        cin >> s;
        int countA=0;
        int countB=0;
        int n = s.length();
        for(int i = 0; i<n ; i++){
            if(s[i]=='a'){
                countA++;
            }
            if(s[i]=='b'){
                countB++;
            }
        }
        cout << min(countA,countB) << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}