#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x;
        cin >> x;
        if(x>65){
            cout << "Overload" << "\n";
        }
        else if(x<35){
            cout << "Underload" << "\n";
        }
        else{
            cout << "Normal" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}