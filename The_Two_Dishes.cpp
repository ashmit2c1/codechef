#include <bits/stdc++.h>
using namespace std;

void solution(int test){
    while(test--){
        int n;
        int s;
        cin >> n >> s;
        
        if (s <= n) {
            cout << s << "\n";
        } else {
            cout << 2 * n - s << "\n";
        }
    }
}

int main(){
    int test;
    cin >> test;
    solution(test);
}
