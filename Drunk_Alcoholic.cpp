#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int k;
        cin >> k;
        int pos=0;
        for(int i=1;i<=k;i++){
            if(i%2==0){
                pos-=1;
            }
            if(i%2==1){
                pos+=3;
            }
        }
        cout << pos << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}