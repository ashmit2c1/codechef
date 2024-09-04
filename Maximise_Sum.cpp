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
        forloop(0,n){ll x;cin >> x;arr.push_back(x);}
        ll negCnt=0;ll zerCnt=0;
        forloop(0,n){
            if(arr[i]<0){negCnt++;}
            if(arr[i]==0){zerCnt++;}
        }
        if(negCnt%2==0 || zerCnt>0){
            ll sum=0;
            forloop(0,n){sum+=abs(arr[i]);}
            print(sum);
        }
        else{
            ll sum=0;
            forloop(0,n){
                sum+=abs(arr[i]);
            }
            ll small=LLONG_MAX;
            forloop(0,n){
                small=min(small,abs(arr[i]));
            }
            sum-=2*small;
            print(sum)
        }


    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}