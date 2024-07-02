#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        char a;
        cin >> a;
        if(a=='B' || a=='b'){
            cout << "BattleShip" <<"\n";
        }
        else if(a=='C' || a=='c'){
            cout << "Cruiser" << "\n";
        }
        else if(a=='D' || a=='d'){
            cout << "Destroyer" << "\n";
        }
        else{
            cout << "Frigate" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}