#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        vector<string> v;
        for(int i = 0; i<n ; i++){
            string s;
            cin >> s;
            v.push_back(s);
        }
        int startersCount=0;
        int longContestCount=0;
        for(int i = 0; i<n ; i++){
            if(v[i]=="START38"){
                startersCount++;
            }
            if(v[i]=="LTIME108"){
                longContestCount++;
            }
        }
        cout << startersCount << " " << longContestCount << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}