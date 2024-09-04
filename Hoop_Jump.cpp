#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
void solution(int test){
    while(test--){
        ll n;cin >> n;
        ll start=0;
        ll end=n+1;
        while(start<end){
            start++;end--;
        }
        print(end)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}