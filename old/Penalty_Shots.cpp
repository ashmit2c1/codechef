#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n = 10;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int sum1=0;
        int sum2=0;
        for(int i = 0; i<n ; i++){
            if(i%2==0){
                sum1+=v[i];
            }
            if(i%2==1){
                sum2+=v[i];
            }
        }
        if(sum1>sum2){
            cout << 1 << "\n";
        }
        else if(sum2>sum1){
            cout << 2 << "\n";
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