#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n==2){
            cout << s << "\n";
        }
        else{
            sort(s.begin(),s.end());
            cout << s << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}