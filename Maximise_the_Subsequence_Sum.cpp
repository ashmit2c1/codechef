#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solution(int test){
    while(test--){
        ll n;
        cin >> n;
        ll x;
        cin >> x;
        vector<ll> v;
        for(int i = 0; i<n ; i++){
            ll y;
            cin >> y;
            v.push_back(y);
        }
        sort(v.begin(), v.end());
        ll sum = 0;
        for(int i = 0; i<n ; i++){
            if(v[i]<0 && x>0){
                v[i] = -1 * v[i];
                x--;
            }
        }
        sort(v.begin(), v.end());
        for(int i = 0; i<n ; i++){
            if(v[i]>0){
                sum+=v[i];
            }
        }
        cout << sum << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}