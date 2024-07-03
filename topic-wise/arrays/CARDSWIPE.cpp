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
        int count=0;
        int maxCount=0;
        unordered_map<int,int> mp;
        for(int i = 0; i<n ; i++){
            if(mp[v[i]]==0){
                mp[v[i]]++;
                count++;
            }
            else{
                mp[v[i]]--;
                count--;
            }
            maxCount = max(maxCount, count);
        }
        cout << maxCount << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}