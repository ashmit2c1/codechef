#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int count=0;
    int x;
    for(int i =0 ; i < n ; i ++){
        cin >> x;
        if(x%k==0){
            count++;
        }
    }
    cout << count << endl;
}