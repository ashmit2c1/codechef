#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        set<int> st;
        for(int i = 0; i<n ; i++){
            st.insert(v[i]);
        }
        int setSize = st.size();
        int diff = n-setSize;
        if(diff==0){
            cout << n << "\n";
        }
        else{
            cout << setSize << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}