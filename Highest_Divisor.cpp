#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;
    cin >> n;
    int ans;
    for(int i = 1; i<=10 ; i++){
        if(n%i==0)
        {
            ans=i;
        }
    }
    cout << ans << "\n";
}
int main(){

    solution();
}