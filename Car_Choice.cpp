#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        float x1,x2,y1,y2;
        cin >> x1 >> x2 >> y1 >> y2;
        float car1 = y1/x1;
        float car2 = y2/x2;
        if(car1>car2){
            cout << "1" << "\n";
        }
        else if(car2>car1){
            cout << "-1" << "\n";
        }
        else{
            cout << "0" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}