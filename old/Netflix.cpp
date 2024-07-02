#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int a[4];
        for(int i =0 ; i < 4 ; i ++){
            cin >> a[i];
        }
        if((a[0]+a[1] >= a[3]) || (a[0]+a[2]>=a[3]) || (a[1]+a[2] >=a[3])){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}