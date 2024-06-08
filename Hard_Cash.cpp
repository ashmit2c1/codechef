#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        long long n,k;
        cin >> n >> k;
        vector<long long> v;
        for(int i = 0; i<n ; i++){
            long long x;
            cin >> x;
            v.push_back(x);
        }
        long long sum=0;
        for(int i = 0; i<n ; i++){
            sum+=v[i];
        }
        cout << sum % k << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}