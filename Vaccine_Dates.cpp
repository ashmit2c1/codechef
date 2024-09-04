#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
void solution(int test){
    while(test--){
        ll d;ll r;ll l;
        cin >> d >> l >> r;
        if(d>=l && d<=r){print("Take second dose now")}
        else if(d<l){print("Too Early")}
        else{print("Too Late")}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}