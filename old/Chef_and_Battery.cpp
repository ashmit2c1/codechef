#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x;
        cin >> x;
        int time=0;
        while(x!=50){
            if(x>50){
                x-=3;
                time++;
            }
            else{
                x+=2;
                time++;
            }
        }
        cout << time << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}