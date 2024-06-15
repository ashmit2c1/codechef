#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(int test){
    while(test--){
        ll n;
        ll x;
        cin >> n >> x;
        vector<ll> v;
        for(int i = 0; i<n ; i++){
            ll y;
            cin >> y;
            v.push_back(y);
        }
        sort(v.begin(),v.end());
        set<ll> st;
        for(int i = 0; i<n ; i++){
            st.insert(v[i]);
        }
        ll len = st.size();
        int ans = min(len,n-x);
        cout << ans << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}