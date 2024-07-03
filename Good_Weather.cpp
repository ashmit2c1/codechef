#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        vector<int> v;
        int n=7;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int sunny=0;
        for(int i = 0; i<n ; i++){
            if(v[i]==1){
                sunny++;
            }
        }
        int rainy = n-sunny;
        if(rainy>=sunny){
            cout << "NO" <<"\n";
        }
        else{
            cout << "YES" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}