#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n ;
        vector<int> v;
        int mx = INT_MIN;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
            mx = max(mx,x);
        }
        int ans = 0;
        for(int i = 0; i<n ; i++){
            ans = max(ans,mx-v[i]);
        }
        cout << ans << "\n";


    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}