#include<bits/stdc++.h>
using namespace std;
void solution(){
    char a;
    char b;
    cin >> a >> b;
    if(a ==b){
        cout << a << endl;
    }
    else if((a=='R' && b=='G') || (a=='G' && b=='R') || (a=='R' && b=='B') || (a=='B' && b=='R')){
        cout << "R" << endl;
    }
    else{
        cout << "B" << endl;
    }


}
int main(){

    solution();
}