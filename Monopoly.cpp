#include<bits/stdc++.h>
using namespace std;
void solution(int n){
    while(n--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if((a>b+c+d) || (b>a+c+d) || (c>a+b+d) || (d>a+b+c)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO"<< endl;
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}