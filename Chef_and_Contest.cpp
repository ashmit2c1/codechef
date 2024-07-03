#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x,y,p,q;
        cin >> x >> y >> p >> q;
        int totX = x+p*10;
        int totY = y+q*10;
        if(totX>totY){
            cout << "Chefina" << "\n";
        }
        else if(totY>totX){
            cout << "Chef" << "\n";
        }
        else{
            cout << "Draw" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}