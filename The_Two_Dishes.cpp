#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";


void solution(int test){
    while(test--){
        ll n;ll s;cin >> n >> s;
        if(s<=n){print(s)}
        else{print(2*n-s)}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}