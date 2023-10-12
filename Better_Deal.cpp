#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int a,b;
	    cin>>a>>b;
	    int x=100*a/100;
	    int y= 200*b/100;
	    int discounted_x = (100-x);
	    int discounted_y= (200-y);
	  
	    if(discounted_x<discounted_y){
	        cout<<"FIRST"<<endl;
	    }
	    else if(discounted_x>discounted_y){
	        cout<<"SECOND"<<endl;
	    }
	    else{
	        cout<<"BOTH"<<endl;
	    }
	}
	return 0;
}