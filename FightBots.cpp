#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        int x,y;
        cin >> x >> y ;
        string s;
        cin >> s;
        int aliceX=0;int aliceY=0;
        bool isPossibleBetween=false;;
        for(int i = 0; i<n ; i++){
            if(s[i]=='R'){aliceX++;}
            else if(s[i]=='L'){aliceX--;}
            else if(s[i]=='U'){aliceY++;}
            else{aliceY--;}
            int xDistance = abs(aliceX-x);
            int yDistacne = abs(aliceY-y);
            int distance = xDistance+yDistacne;
            if(distance==i+1){isPossibleBetween=true;break;}
        }
        int distance = abs(aliceX-x)+abs(aliceY-y);
        if(distance==n){cout << "Yes" << "\n";}
        else if(isPossibleBetween==true){cout << "Yes" << '\n';}
        else{cout << "No" << "\n";}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}