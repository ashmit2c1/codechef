#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
	    int x,y,d;
	    cin>>x>>y;
	    d=y/x;
	    if(d*x<y)
	    {
	        cout<<d<<endl;
	    }
	    else
	    cout<<d-1<<endl;
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}