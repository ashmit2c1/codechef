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
        int maxSpeed = INT_MAX;
        int cnt=0;
        for(int i = 0; i<n ; i++){
            if(v[i]<=maxSpeed){
                maxSpeed=v[i];
                cnt++;
            }
        }
        cout << cnt << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}