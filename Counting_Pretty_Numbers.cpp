#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int l,r;
        cin >> l >> r;
        int count=0;
        for(int i=l; i<=r;i++){
            if(i%10==2 || i%10==3 || i%10==9){
                count++;
            }
        }
        cout << count << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}