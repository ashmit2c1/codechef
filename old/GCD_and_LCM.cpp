#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        long long int a,b;
        cin >> a >> b;
        cout << gcd(a,b) << " " << lcm(a,b) << endl;
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}