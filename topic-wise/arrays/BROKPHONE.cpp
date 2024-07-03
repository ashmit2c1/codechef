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
        int count=0;
        for(int i=1;i<n-1;i++){
            if(v[i]!=v[i-1] || v[i]!=v[i+1]){
                count++;
            }
        }
        if(v[n-1]!=v[n-2]){
            count++;
        }
        if(v[0]!=v[1]){
            count++;
        }
        cout << count << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}