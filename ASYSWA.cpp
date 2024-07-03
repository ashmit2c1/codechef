#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        unordered_map<int,int> mp;
        for(int i = 0; i<n ; i++){
            mp[v[i]]++;
        }
        int maxFreq = INT_MIN;
        int minFreq = INT_MAX;
        for(auto it=mp.begin();it!=mp.end();it++){
            maxFreq = max(maxFreq,it->second);
            minFreq = min(minFreq,it->second);
        }
        int countMaxFreq = 0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==maxFreq){
                countMaxFreq++;
            }
        }
        if(countMaxFreq==1){
            cout << maxFreq << "\n";
        }
        else{
            cout << minFreq << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}