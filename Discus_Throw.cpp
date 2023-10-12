#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--)
    {
        int a[3];
        for(int i = 0; i < 3 ; i++){
            cin >> a[i];
        }
        int max = INT_MIN;
        for(int i = 0 ; i < 3 ; i++){
            if(a[i]>max){
                max = a[i];
            }
        }
        cout << max << endl;
    }
}