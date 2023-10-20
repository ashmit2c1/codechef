#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int count = 1;
        for(int i = 1 ; i <=n ; i++){
            count = count * i;
        }
        cout << count << endl;
    }
}