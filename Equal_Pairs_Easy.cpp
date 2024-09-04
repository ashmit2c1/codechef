#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";

void solution(int test){
    while(test--){
        ll n;cin >> n;
        vector<ll>arr(n);
        ll zeroCnt=0;
        
        forloop(0,n){
            cin >> arr[i];
            if(arr[i]==0){zeroCnt++;}
        }
        
        if(zeroCnt==n){print(n*(n-1)/2)}
        else if(zeroCnt==0){
            ll cnt=0;
            forloop(0,n){
                secondfor(i+1,n){
                    if(arr[i]==arr[j]){
                        cnt++;
                    }
                }
            }
            print(cnt)
        }
        else{
            unordered_map<ll,ll>mp;
            forloop(0,n){
                if(arr[i]!=0){mp[arr[i]]++;}
            }
            ll maxFreq=0;
            for(auto it=mp.begin();it!=mp.end();it++){
                ll freq=it->second;
                maxFreq=max(maxFreq,freq);
            }
            ll sum = maxFreq+zeroCnt;
            print(sum*(sum-1)/2)
        }
    }
}

int main(){
    int test;
    cin >> test;
    solution(test);
}