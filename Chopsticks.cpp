#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(){
    ll n;
    ll d;
    cin >> n >> d;
    vector<ll> v;
    for(int i = 0; i<n ; i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll ans = 0;
    sort(v.begin(),v.end());
    for(int i = 0; i<n-1 ; i++){
        if(abs(v[i+1]-v[i])<=d){
            ans++;
            i++;
        }
    }
    cout << ans << "\n";
}
int main(){

    solution();
}