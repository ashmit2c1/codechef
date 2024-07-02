#include <bits/stdc++.h>
using namespace std;

void solution(int test){
    while(test--){
	    int n,sum=0,cnt=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        
	        sum+=a[i];
	        
	        if(sum==(i+1))
	        cnt++;
	    }
	    
	    cout<<cnt<<endl;
    }
}

int main(){
    int test;
    cin >> test;
    solution(test);
}
