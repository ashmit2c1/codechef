#include <bits/stdc++.h>
using namespace std;

void solution(int test) {
    while(test--) {
        int n;
        cin >> n;
        int w;
        cin >> w;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        int sum = 0;
        int count = 0;
        for(int i = 0; i < n; i++) {
            sum += v[i];
            count++;
            if(sum >= w) {
                break;
            }
        }
        int holidays = n - count;
        cout << holidays << endl;
    }
}

int main() {
    int t;
    cin >> t;
    solution(t);
    return 0;
}