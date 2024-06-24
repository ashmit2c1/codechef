#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(int test){
    while(test--){
        ll n;
        cin >> n;
        vector<ll> v;
        for(int i = 0; i<n ; i++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        bool flag = true;
        for(int i = 0; i<n-1 ; i++){
            if(abs(v[i]-v[i+1])>1){
                flag = false;
                break;
            }
        }
        if(flag==true){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}