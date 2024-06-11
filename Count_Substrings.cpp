#include <bits/stdc++.h>
using namespace std;

void solution(int test){
    while(test--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count1 = 0;

        // Count the number of '1's in the string
        for(char c : s) {
            if(c == '1') {
                count1++;
            }
        }

        // Calculate the number of valid substrings
        int result = count1 * (count1 + 1) / 2;
        cout << result << "\n";
    }
}

int main(){
    int test;
    cin >> test;
    solution(test);
}
