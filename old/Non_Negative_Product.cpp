#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n ;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int ans;
        int negCount=0;
        bool zeroFlag = false;
        for(int i = 0; i<n ; i++){
            if(v[i]<0){
                negCount++;
            }
            if(v[i]==0){
                zeroFlag=true;
            }
        }
        if(zeroFlag==true){
            cout << 0 << "\n";
        }
        else{
            if(negCount%2==1){
                cout << 1 << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}