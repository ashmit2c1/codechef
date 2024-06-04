#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        double a,b,c,d;
        cin >> a >> b >> c >> d;
        double ratio1 = pow(a,2)/pow(c,3);
        double ratio2 = pow(b,2)/pow(d,3);
        if(ratio1==ratio2){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}