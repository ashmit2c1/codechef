#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--){
        double n;
        double m;
        cin >> n >> m;
        double nD = n-(n/10);
        if(nD<m){
            cout << "ONLINE" << endl;
        }   
        else if(nD>m){
            cout << "DINING" << endl;
        }
        else{
            cout << "EITHER" << endl;
        }
    }
}