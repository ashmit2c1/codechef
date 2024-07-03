#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
      string s;
      string t;
      cin >> s >> t;
      string ans= " ";
      int n = 5;
      for(int i = 0; i<n ; i++){
        if(s[i]==t[i]){
          ans += 'G';
        }
        else{
          ans+='B';
        }
      }
      cout << ans << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}