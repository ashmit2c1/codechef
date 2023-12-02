#include<bits/stdc++.h>
using namespace std;
void solution(int n){
    while(n--){
        int num ;
        cin >> num ;
        int fact = 1;
        if(num>0){
            for(int i = 1 ; i <=num ; i++){
                fact = fact * i;
            }
        }
        cout << fact << endl;
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}