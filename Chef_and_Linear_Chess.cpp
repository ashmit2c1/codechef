#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(int test){
    while(test--){
        ll n;
        ll p;
        cin >> n >> p;
        vector<ll> v;
        for(int i = 0; i<n ; i++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int result = 0;
        for(int i=n-1;i>=0;i--){
            if(p%v[i]==0){
                result = v[i];
                break;
            }
        }
        if(result>0){
            cout << result << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}