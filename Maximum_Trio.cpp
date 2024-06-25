#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(int test){
    while(test--){
        ll n ;
        cin >> n;
        vector<ll> v;
        for(int i = 0; i<n ; i++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        ll ans = (v[n-1]-v[0])*v[n-2];
        cout << ans << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}