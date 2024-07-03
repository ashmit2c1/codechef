#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(int test){
    while(test--){
        ll n;
        ll k;
        cin >> n >> k;
        vector<ll> v;
        for(int i = 0; i<n ; i++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        if(k>=n-1){
            cout <<v[n-1] << "\n";
        }
        else{
            cout << v[k] << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}