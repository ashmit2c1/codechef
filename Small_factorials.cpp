#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int count = 1;
        if(n==0){
            cout << count << endl;
        }
        else{
                    for(int i = 1 ; i <=n ; i++){
            count = count * i;
        }
        }
        cout << count << endl;
    }
}