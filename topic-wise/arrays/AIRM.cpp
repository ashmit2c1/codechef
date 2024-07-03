#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        vector<int> arrival;
        vector<int> departure;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            arrival.push_back(x);
        }
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            departure.push_back(x);
        }
        unordered_map<int,int> mp;
        for(int i = 0; i<n ; i++){
            mp[arrival[i]]++;
            mp[departure[i]]++;
        }
        int maxRunaway = 0;
        for(auto it=mp.begin(); it!=mp.end();it++){
            maxRunaway = max(maxRunaway,it->second);
        }
        cout << maxRunaway << "\n";


    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}