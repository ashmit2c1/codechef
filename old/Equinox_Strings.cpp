#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        long long n,a,b;
        cin >> n >> a >> b;
        long long  pointsSarthak = 0;
        long long pointsAnuradha = 0;
        while(n--){
            string s;
            cin >> s;
            if(s[0]=='E' || s[0]=='Q'|| s[0]=='U'|| s[0]=='I'|| s[0]=='N'|| s[0]=='O'|| s[0]=='X'){
                pointsSarthak+=a;
            }
            else{
                pointsAnuradha+=b;
            }
        }
        if(pointsSarthak>pointsAnuradha){
            cout << "SARTHAK" << "\n";
        }
        else if(pointsAnuradha>pointsSarthak){
            cout << "ANURADHA" << "\n";
        }
        else{
            cout << "DRAW" <<"\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}