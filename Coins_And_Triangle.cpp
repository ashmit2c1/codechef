#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(int test){
    while(test--){
        ll n;
        cin >> n;
        ll start = 1;
        ll end = n;
        ll ans = 0;
        while(start<=end){
            ll mid = start + (end-start)/2;
            ll coinsNeeded = (mid*(mid+1))/2;
            if(coinsNeeded <= n){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        cout << ans << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}