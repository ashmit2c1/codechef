#include <bits/stdc++.h>
using namespace std;

void solution(long long test) {
    while (test--) {
        long long seasons;
        cin >> seasons;
        vector<int> introLength(seasons);
        long long ans = 0;

        for (long long i = 0; i < seasons; i++) {
            cin >> introLength[i];
            ans += introLength[i]; 
        }

        for (long long i = 0; i < seasons; i++) {
            long long episodes;
            cin >> episodes;

            for (long long j = 0; j < episodes; j++) {
                long long durationEpisodes;
                cin >> durationEpisodes;
                long long totalWatchTime = durationEpisodes-introLength[i];
                ans += totalWatchTime;
            }
        }
        cout << ans << "\n";
    }
}

int main() {
    long long test;
    cin >> test;
    solution(test);
    return 0;
}
