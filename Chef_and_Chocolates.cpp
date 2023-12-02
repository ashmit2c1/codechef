#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x,y,z;
        cin >> x >> y >> z;
        cout << abs((5*x + 10*y)/z) << endl;
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}