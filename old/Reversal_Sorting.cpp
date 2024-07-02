#include<bits/stdc++.h>
using namespace std;

void solution(int test){
    while(test--){
        int n,x;
        cin >> n >> x;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int k;
            cin >> k;
            v.push_back(k);

        }
        bool flag = true;
        for(int i = 0; i<n ; i++){
            if(v[i]>v[i+1]){
                if(v[i]+v[i+1]<=x){
                    swap(v[i],v[i+1]);
                }
                else{
                    flag = false;
                }
            }
        }
        if(flag==true){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" <<" \n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}