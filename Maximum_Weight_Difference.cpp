#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        long long n;
        cin >> n;
        long long k;
        cin >> k;
        vector<long long> v;
        for(int i = 0; i<n ; i++){
            long long x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        long long sumFirstK=0;

        for(int i = 0; i<k ; i++){
            sumFirstK+=v[i];
        }
        long long sum = 0;
        for(int i = 0; i<n ; i++){
            sum+=v[i];

        }
        long long sumAfterK = sum-sumFirstK;
        long long weightCarriedBySon = min(sumFirstK,sumAfterK);
        long long weightCarriedByDad = max(sumAfterK,sumFirstK);
        cout << weightCarriedByDad-weightCarriedBySon << "\n";


    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}