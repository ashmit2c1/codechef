#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        long long n;
        cin >> n;
        vector<long long> v;
        for(int i = 0; i<n ; i++){
            long long x;
            cin >> x;
            v.push_back(x);
        }
        long long diff = LLONG_MAX;
        sort(v.begin(), v.end());
        for(int i = 1; i<n; i++){
            long long difference = abs(v[i]-v[i-1]);
            if(difference<diff){
                diff = difference;
            }
        }
        cout << diff << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}