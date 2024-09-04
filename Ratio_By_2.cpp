#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";


void solution(int test){
    while(test--){
        ll x;ll y;cin >> x >> y;
        if(x>y){
            if((x-2*y)>=0){print(0)}
            else{
                if(abs(x-2*y)%2==0){
                    print(abs(x-2*y)/2)
                }
                else{
                    print(abs(x-2*y)/2 +1)
                }
            }
        }
        else{
            if((y-2*x)>=0){print(0)}
            else{
                if(abs(y-2*x)%2==0){
                    print(abs(y-2*x)/2)
                }
                else{
                    print(abs(y-2*x)/2 +1)
                }              
            }
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}