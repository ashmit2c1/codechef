#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,b,c;
        cin >> a >> b >> c;
        if((a+b)<70 || (b+c)<70 || (a+c)<70){
            cout << "Fail" << endl;
        }
        else{
            cout << "Pass" << endl;
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}