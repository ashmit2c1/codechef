#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x=min(abs(a-b),abs(abs(a-b)-c));
	    cout<<x<<endl;
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}