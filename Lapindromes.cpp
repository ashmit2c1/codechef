#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        string s;
        cin >> s;
        int n = s.length();
        vector<char> a;
        vector<char> b;
        if(n%2==0){
            int k = n/2;
            for(int i=0;i<k;i++){
                a.push_back(s[i]);
            }
            for(int i=k;i<n;i++){
                b.push_back(s[i]);
            }
        }
        else{
            int k = n/2;
            for(int i=0;i<k;i++){
                a.push_back(s[i]);
            }
            for(int i=k+1;i<n;i++){
                b.push_back(s[i]);
            }
        }
        bool flag = true;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}