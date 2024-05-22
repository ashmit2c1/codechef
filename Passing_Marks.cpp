#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int am,bm,cm,t,a,b,c;
        cin >> am >> bm >> cm >> t >> a >> b >> c;
        int sum = a+b+c;
        if(a>=am && b>=bm && c>=cm && sum>=t){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}