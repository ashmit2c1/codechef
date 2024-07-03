#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n,x;
        cin >> n >> x;
        int ans=0;
        for(int i = 0; i<n ; i++){
            int space;
            int rating;
            cin >> space >> rating;
            if(x>=space){
                ans = max(ans,rating);
            }
        }
        cout << ans << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}