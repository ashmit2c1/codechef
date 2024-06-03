#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int d,D,a,b,c;
        cin >> d >> D >> a >> b >> c;
        int dist = d*D;
        if(dist>=42){
            cout << c << "\n";
        }
        else if(dist>=21 && dist < 42){
            cout << b << "\n";
        }
        else if(dist>=10 && dist < 21){
            cout << a << "\n";
        }
        else{
            cout << 0 << "\n";
        }


    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}