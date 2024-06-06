#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n = 3;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int sum = v[2] + v[1];
        cout << sum << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}