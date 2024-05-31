#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
	    int x;cin>>x;int cnt=0;
	    if(x%5==0){
	        while(1){
	            if(x%10==0){
	               cout<<cnt<<endl;
	               break;
	            } 
	            x*=2;
	            cnt++;
	        }
	    }
	    else 
	    cout<<"-1"<<endl;
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}