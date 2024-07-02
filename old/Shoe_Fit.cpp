#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n=3;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);        
        }
        int sum=0;
        for(int i = 0; i<n ; i++){
            sum+=v[i];
        }
        if(sum==1 || sum==2){
            cout << 1 << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}