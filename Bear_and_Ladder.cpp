#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
	    int x,y;
	    int flag=0;
	    cin>>x>>y;
	    if(x%2==0 && y%2==0 && abs(y-x)==2)
	    {
	        cout<<"YES"<<endl;
	        flag=1;
	    }
	    if(x%2!=0 && y%2!=0 && abs(y-x)==2)
	    {
	        cout<<"YES"<<endl;
	        flag=1;
	    }
	    if(max(x,y)%2==0 && abs(y-x)==1)
	    {
	        cout<<"YES"<<endl;
	        flag=1;
	    }
	    if(flag==0)
	    cout<<"NO"<<endl;
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}