#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x,y;
        cin >> x >> y;
        int time;
        for(int i=1;i>0;i++){
            y = i+y;
            if(y>=x){
                time=i;
                break;
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