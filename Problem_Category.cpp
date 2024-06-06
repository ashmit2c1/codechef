#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x;
        cin >> x;
        if(x>=1 && x<100){
            cout << "Easy" << "\n";
        }
        else if(x>=100 && x<200){
            cout << "Medium" << "\n";
        }
        else{
            cout << "Hard" << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}