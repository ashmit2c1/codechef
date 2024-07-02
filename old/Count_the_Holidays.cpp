#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n, a, h=8;
	    cin>>n;

        for (int i=0; i<n; i++)	{
            cin>>a;
            
            if (a%7 != 6 && a%7 != 0) h++;
        }
        cout<< h <<endl;
	}
	return 0;
}