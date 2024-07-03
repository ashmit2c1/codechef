#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x,y;
        cin >> x >> y;
        int product = x*y;
        string s = to_string(product);
        if(s[0]!='0' &&  s.size()==5){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}