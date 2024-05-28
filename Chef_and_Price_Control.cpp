#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n,k;
        cin >> n >> k;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }

        for(int i = 0; i<n ; i++){
            if(v[i]>k){
                v[i]=k;
            }
        }
        int sum2=0;
        for(int i = 0; i<n ; i++){
            sum2+=v[i];
        }
        cout << sum-sum2 << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}