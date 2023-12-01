#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin>>n;
	int a[n];
	int even_count=0,odd_count=0;
	for(int i=0;i<n;i++){  

	    cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
	    if(a[i]%2==0) 
	        even_count++; 
	    else
	        odd_count++; 
    }
	if(even_count>odd_count)
	    cout<<"READY FOR BATTLE"<<endl;
	else
	    cout<<"NOT READY"<<endl;
	return 0;
}