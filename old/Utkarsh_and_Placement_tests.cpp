#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        char a[3];
        for(int i=0;i<3;i++){
            cin >> a[i];
        }
        char b[2];
        for(int i=0;i<2;i++){
            cin >> b[i];
        }
        if(a[0]==b[0] || a[0]==b[1]){
            cout << a[0] << "\n";
        }
        else if(a[1]==b[0] || a[1]==b[1]){
            cout << a[1] << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}