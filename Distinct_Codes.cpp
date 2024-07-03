#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        string s;
        cin >> s;
        int n = s.length();
        set<string> st;
        for(int i=0;i<n-1;i++){
            string sub = s.substr(i,2);
            st.insert(sub);
        }
        cout << st.size() << '\n';
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}