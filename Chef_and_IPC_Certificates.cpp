#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n,m,k;
    cin >> n >> m >> k;
    int count=0;
    for(int i = 0; i<n ; i++){
        vector<int> v;
        for(int i=0;i<k+1;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=v[i];
        }
        if(sum>=m && v[k]<=10){
            count++;
        }
    }
    cout << count << "\n";

}
int main(){

    solution();
}