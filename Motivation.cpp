#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";


void solution(int test){
    while(test--){
        ll n;cin >> n;ll x;cin >> x;
        ll maxRating=-1;
        while(n--){
            ll space;ll rating;cin >> space >> rating;
            if(space<=x){maxRating=max(maxRating,rating);}
        }
        print(maxRating)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}