#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
    int a,b,c,d,K;
    cin>>a>>b>>c>>d>>K;
    int path= abs(c-a)+ abs(d-b);
    int extra= K- path;
    if(path<=K && extra%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}