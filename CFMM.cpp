#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        vector<string> v;
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            v.push_back(s);
        }
        unordered_map<char,int> mp;
        for(int i = 0; i<n ; i++){
            string s = v[i];
            for(int j=0;j<s.size();j++){
                mp[s[j]]++;
            }
        }
        int c = mp['c'];
        int o = mp['o'];
        int d = mp['d'];
        int e = mp['e'];
        int h = mp['h'];
        int f = mp['f'];
        int ans = min({c/2,o,d,e/2,h,f});
        cout << ans << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}