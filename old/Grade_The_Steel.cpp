#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        float h,cc,ts;
        cin >> h >> cc >> ts;
        if(h>50 && cc <0.7 && ts > 5600){
            cout << 10 << endl;
        }
        else if(h>50 && cc < 0.7 && ts <= 5600){
            cout << 9 << endl;
        }
        else if(h<=50 && cc < 0.7 && ts > 5600){
            cout << 8 << endl;
        }
        else if(h>50 &&  cc >= 0.7 && ts > 5600){
            cout << 7 << endl;
        }
        else if(h > 50 || cc <0.7 || ts > 5600){
            cout << 6 << endl;
        }
        else{
            cout << 5 << endl;
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}