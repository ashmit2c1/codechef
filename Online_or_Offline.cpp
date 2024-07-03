#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,b;
        cin >> a >> b;
        int d_a = a-(a/10);
        if(d_a<b){
            cout << "ONLINE" << endl;
        }
        else if(d_a>b){
            cout << "DINING" << endl;
        }
        else{
            cout << "EITHER" << endl;
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}