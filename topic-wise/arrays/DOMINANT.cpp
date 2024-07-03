#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(int test){
    while(test--){
        ll n;
        cin >> n;
        vector<ll> v;
        for(int i = 0; i<n ; i++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        unordered_map<ll,int> mp;
        for(int i = 0; i<n ; i++){
            mp[v[i]]++;
        }
        int maxFreq = 0;
        for(auto it=mp.begin();it!=mp.end();it++){
            maxFreq = max(maxFreq,it->second);
        }
        int countFreq=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==maxFreq){
                countFreq++;
            }
        }
        if(countFreq==1){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}