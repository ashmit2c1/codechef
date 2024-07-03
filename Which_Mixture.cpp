#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,b;
        cin >> a >> b;
        if(a>0 && b>0){
            cout << "Solution" << endl;
        }
        else if(b==0){
            cout <<"Solid" << endl;
        }
        else{
            cout <<" Liquid" << endl;
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}