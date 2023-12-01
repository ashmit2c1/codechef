#include<bits/stdc++.h>
using namespace std;

void solution(int n){
    while(n--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(c < a || d < b){
            cout << "IMPOSSIBLE" << endl;
        }
        else{
            cout << "POSSIBLE" << endl;
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}