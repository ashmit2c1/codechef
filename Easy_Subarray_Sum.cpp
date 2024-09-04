#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";

void solution(int test){
    while(test--){
        ll n;cin >> n;
        vector<ll>arr;
        forloop(0,n){
            ll x;cin >> x;arr.push_back(x);
        }
        ll start=-1;ll end=-1;ll cnt=0;
        forloop(0,n){if(arr[i]>0){start=i;break;}}
        forloop(0,n){if(arr[i]>0){end=i;}}
        if(start=-1){
            forloop(start,end+1){
                if(arr[i]<0){cnt++;}
            }
        }
        print(cnt)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}