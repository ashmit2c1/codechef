#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        int count=0;
        for(int i =0; i < n ; i ++){
            if(a[i]<=60 && a[i]>=10){
                count = count+1;
            }
        }
        cout << count << endl;
    }
}