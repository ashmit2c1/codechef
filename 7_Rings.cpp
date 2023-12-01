#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        int x;
        cin >> n >> x;
        int product = n*x;
        string product_string = to_string(product);
        if(product_string.size()==5 && product_string[0]!='0'){
            cout << "YES" << endl; 
        }
        else{
            cout << "NO" << endl;
        }
    }
}