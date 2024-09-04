#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
void solution(int test){
    while(test--){
    ll n;ll k;cin >> n >> k;
    vector<ll>arr;forloop(0,n){ll x;cin >> x;arr.push_back(x);}
    while(k--){
        ll max=arr[arr.size()-1];
        ll min=arr[0];
        ll newNum = max+min;
        arr.erase(arr.begin());arr.erase(arr.end()-1);
        arr.push_back(newNum);
    }
    forloop(0,arr.size()){
        cout << arr[i] << " ";
    }
    cout << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}