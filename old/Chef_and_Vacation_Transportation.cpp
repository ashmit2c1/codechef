#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x,y,z;
        cin >> x >> y >> z;
        int time1 = x+y;
        if(z>time1){
            cout << "PLANEBUS" << "\n";
        }
        else if(z==time1)
        {
            cout << "EQUAL" << "\n";
        }
        else{
            cout << "TRAIN" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}