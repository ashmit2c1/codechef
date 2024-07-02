#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,b,c,x,y,z;
        cin >> a >> b >> c >> x >> y >> z;
        int maxScoreAlice = a+b+c;
        int maxScoreBob = x+y+z;
        int minScoreAlice = min(a,min(b,c));
        int minScoreBob = min(x,min(y,z));
        int scoreAlice = maxScoreAlice-minScoreAlice;
        int scoreBob = maxScoreBob-minScoreBob;
        if(scoreAlice>scoreBob){
            cout << "Alice" << "\n";
        }
        else if(scoreAlice==scoreBob){
            cout << "Tie" << "\n";
        }
        else{
            cout << "Bob" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}