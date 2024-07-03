#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int count=0;
        int n;
        cin >> n;
        for(int i = 0; i<n ; i++){
            int u,v;
            cin >> u >> v;
            int diff = abs(u-v);
            if(diff>5){
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