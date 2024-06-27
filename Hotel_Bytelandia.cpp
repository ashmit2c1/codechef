#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solution(int test){
    while(test--){
        ll n;
        cin >> n ;
        vector<ll> arrival;
        vector<ll> departure;
        for(int i = 0; i<n ; i++){
            ll x;
            cin >> x;
            arrival.push_back(x);
        }
        for(int i = 0; i<n ; i++){
            ll x;
            cin >> x;
            departure.push_back(x);
        }
        sort(arrival.begin(), arrival.end());
        sort(departure.begin(), departure.end());
        int i =0;
        int j =0;
        int currentGuests = 0;
        int maxGuests = 0;
        while(i<n && j<n){
            if(arrival[i] < departure[j]){
                currentGuests++;
                maxGuests = max(maxGuests,currentGuests);
                i++;
            }
            else{
                currentGuests--;
                j++;
            }
        }
        cout << maxGuests << "\n";
}}
int main(){
    int test;
    cin >> test;
    solution(test);
}