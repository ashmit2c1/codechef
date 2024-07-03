#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x;
        cin >> x;
        string s;
        cin >> s;
        int c=0;
        int cf=0;
        int d=0;
        int len = s.length();
        for(int i = 0; i<len ; i++){
            if(s[i]=='C'){
                c++;
            }
            if(s[i]=='N'){
                cf++;
            }
            if(s[i]=='D'){
                d++;
            }
        }
        int pointsCarlsen = 2*c + d;
        int pointsChef = 2*cf + d;
        if(pointsCarlsen>pointsChef){
            cout << 60*x << "\n";
        }
        else if(pointsCarlsen<pointsChef){
            cout << 40*x << "\n";
        }
        else{
            cout << 55*x << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}