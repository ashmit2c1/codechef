#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll calculateInitialAlternatingSum(const vector<ll> &v) {
    ll sum = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        if (i % 2 == 0) {
            sum += abs(v[i]);
        } else {
            sum -= abs(v[i]);
        }
    }
    return sum;
}

ll getSwapImpact(int i, int j, const vector<ll> &v) {
    ll impact = 0;
    if (i % 2 == 0) {
        impact += abs(v[j]) - abs(v[i]);
    } else {
        impact -= abs(v[j]) - abs(v[i]);
    }
    if (j % 2 == 0) {
        impact += abs(v[i]) - abs(v[j]);
    } else {
        impact -= abs(v[i]) - abs(v[j]);
    }
    return impact;
}

void solution(int test) {
    while (test--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        ll initSum = calculateInitialAlternatingSum(v);
        ll maxSum = initSum;

        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                ll impact = getSwapImpact(i, j, v);
                ll newSum = initSum + impact;
                maxSum = max(maxSum, newSum);
            }
        }

        cout << maxSum << "\n";
    }
}

int main() {
    int test;
    cin >> test;
    solution(test);
    return 0;
}