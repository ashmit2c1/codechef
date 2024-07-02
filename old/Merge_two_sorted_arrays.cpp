#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n,m;
    cin >> n >> m;
    vector<int> v1;
    vector<int> v2;
    for(int i = 0; i<n ; i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for(int i = 0; i<m ; i++){
        int x;
        cin >> x;
        v2.push_back(x);
    }
    map<int,int> mp;
    for(int i = 0; i<n ; i++){
        mp[v1[i]]++;
    }
    for(int i = 0; i<m ; i++){
        mp[v2[i]]++;
    }
    for(auto j : mp){
    for(int i = 0 ; i < j.second ; i++){
        cout << j.first << " ";
    }
    }

}
int main(){

    solution();
}