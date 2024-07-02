#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        int power=0;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i = 0; i<n ; i++){
            if(v[i]!=0){
                power=i;
            }
        }
        cout << power << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}