#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    /* FIRST APPROACH 
    while(test--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int sum=0;
        int minSum=INT_MAX;
        for(int i = 0; i<n ; i++){
            for(int j=i+1;j<n;j++){
                sum = v[i] + v[j];
                minSum = min(minSum,sum);
            }
        }
        cout << minSum << '\n';
    } */
   // SECOND APPROACH 
   while(test--){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i<n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end()); // merge sort with time complexity of O ( N log N )
    cout << v[0] + v[1] << "\n";
   }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}