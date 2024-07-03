#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        long long sum=0;
        for(int i=0;i<n;i++){
             sum+=max(abs(v[i]-1),abs(m-v[i]));
        }
        cout << sum << "\n";


    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}