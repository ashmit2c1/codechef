#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        vector<long long>v;
        int n = 10;
        for(int i = 0; i<n ; i++){
            long long x;
            cin >> x;
            v.push_back(x);
        }
        long long k;
        cin >> k;
        int i=9;
        while(i>=0 && k-v[i]>=0){
            k-=v[i];
            i--;
        }
        cout << i+1 << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}