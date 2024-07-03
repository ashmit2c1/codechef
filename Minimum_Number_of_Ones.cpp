#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        if(n<=1){
            cout << 1 << endl;
        }
        string s;
        int count =0 ;
        for(int i = 0 ; i < n ; i++){
            if(i%2!=0){
                s+="1";
                count++;
            }
            else{
                s += "0";

            }
        }
        cout << count << endl;
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}