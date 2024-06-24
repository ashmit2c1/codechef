#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(int test){
    while(test--){
        ll n,k;
        cin >> n >> k;
        vector<ll> v;
        for(int i = 0; i<n ; i++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        ll sum =0 ;
        ll count=0;
        for(int i = 0; i<n ; i++){
            if(sum+v[i]<=k){
                sum+=v[i];
                count++;
            }
            else{
                ll discountPrice = (v[i]+1)/2; // doing this to handle the ceil 
                if(sum+discountPrice<=k){
                    count++;
                    break;
                }
                else{
                    break;
                }
            }
        }
        cout << count << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}