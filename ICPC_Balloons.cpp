#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n ;
        cin >> n;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        set<int> st;
        for(int i = 0; i<n ; i++){
            if(v[i]>=1 && v[i]<=7){
                st.insert(v[i]);
            }
            if(st.size()==7){
                cout << i+1 << "\n";
                break;
            }
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}