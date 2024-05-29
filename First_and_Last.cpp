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
        int sum = v[0]+v[n-1];
        for(int i = 0; i<n-1; i++){
            int temp = v[i]+v[i+1];
            sum = max(temp,sum);
        }
        cout << sum << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}