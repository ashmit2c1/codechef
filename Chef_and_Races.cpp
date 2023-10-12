#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int x,y,a,b;
        cin >> x >> y >> a >> b;
        if((x==a && y==b) || (x==b && y==a)){
            cout << 0 << endl;
        }
        else if((x==a && y!=b) || (x==b && y!=a) || (x!=a && y==b) || (x!=b && y==a) ){
            cout << 1 << endl;
        }
        else 
        {
            cout << 2 << endl;
        }
    }
}