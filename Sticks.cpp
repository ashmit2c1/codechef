#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for(int i = 0; i<n-1; i++){
            if(v[i]==v[i+1]){
                ans.push_back(v[i]);
                i++;
            }
        }
        int len = ans.size();
        if(len<2){
            cout << -1 << '\n';
        }
        else{
            cout << ans[len-1]*ans[len-2] << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}