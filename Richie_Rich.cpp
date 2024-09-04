#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
void solution(int test){
    while(test--){
        ll a;ll x;ll b;cin >> a >> b >> x;
        ll cnt=0;
        while(a<b){
            a+=x;cnt++;
        }
        print(cnt)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}