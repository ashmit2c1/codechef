#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    int player1=0;
    int player2=0;
    int lead = 0;
    int winner = 0;
    while(test--){
        int p1;
        int p2;
        cin >> p1 >> p2;
        player1=player1+p1;
        player2=player2+p2;
        int x = abs(player1-player2);
        if(x>lead){
            lead=x;
            if(player1>player2){
                winner=1;
            }
            else{
                winner=2;
            }
        }
    }
    cout << winner << " " << lead << endl;
}