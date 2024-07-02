#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(int test){
    while(test--){
        ll n,l,r;
        cin >> n >> l >> r;
        vector<ll> v;
        for(int i = 0; i<n ; i++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll maxCount=0;
        ll minCount=0;
        ll count=0;
        for(int i = 0; i<n ; i++){
            if(v[i]>=l && v[i]<=r){
                count++;
            }
            else{
                count--;
            }
            maxCount = max(maxCount,count);
            minCount = min(minCount,count);
        }
        cout << maxCount <<" " <<  minCount << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}