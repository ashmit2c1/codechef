#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        int x;
        cin >> n >> x;
        int a[n];
        int count =0;
        for(int i = 0 ;i < n ; i++){
            cin >> a[i];
            if(a[i]>=x){
                count++;
            }
        }
        cout << count << endl;

    }
}