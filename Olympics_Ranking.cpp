#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n=3;
        vector<int> v1;
        vector<int> v2;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v1.push_back(x);
        }
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v2.push_back(x);        
        }
        int sum1=0;
        int sum2=0;
        for(int i = 0; i<n ; i++){
            sum1+=v1[i];
            sum2+=v2[i];
        }
        if(sum1>sum2){
            cout << 1 << "\n";
        }
        else{
            cout << 2 << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}