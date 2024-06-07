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
        int count=0;
        for(int i = 0; i<n ; i++){
            if(v[i]>=1 && v[i]<=7){
                count=i;
            }
        }
        cout << count+1 << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}