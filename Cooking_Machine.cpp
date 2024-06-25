#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,b;
        cin >> a >> b;
        if(a==b){
            cout << 0 << "\n";
        }
        else{
            int count=0;
            while(a!=b){
                if(a>b){
                    a=a/2;
                    count++;
                }
                else{
                    b=b/2;
                    count++;
                }
            }
            cout << count << '\n';
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}