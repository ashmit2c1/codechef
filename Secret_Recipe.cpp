#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        float x1,x2,x3,v1,v2;
        cin >> x1 >> x2 >> x3 >> v1 >> v2;
        float time1 = (abs(x1-x3))/v1;
        float time2 = (abs(x2-x3))/v2;

        if(time1>time2){
            cout << "Kefa" << "\n";
        }
        else if(time2>time1){
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