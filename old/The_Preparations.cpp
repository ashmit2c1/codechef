#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int m;
        int n;
        int k;
        cin >> m >> n >> k;
        if(m>(n*k)){
            cout <<"YES" << endl;
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