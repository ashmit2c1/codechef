#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--){
        int n; // number of levels 
        int x; // time taken to complete each level
        int z; // break time 
        cin >> n >> x >> z;
        if(n%3==0 && n>3){
            cout << (n*x)+(((n/3)-1))*z << endl;
        }
        else if (n%3!=0 && n>3){
            cout << (n*x)+(((n/3)))*z << endl;
        }
        else{
            cout << n*x << endl;
        }
    }
}