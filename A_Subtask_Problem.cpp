#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int t=0;
        for(int i = 0; i<n ; i++){
            if(v[i]==1){
                t++;
            }
            if(v[i]==0){
                break;
            }
        }
        if(t>=m && t!=n){
            cout << k << "\n";
        }
        else if(t==n){
            cout << 100 << "\n";
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