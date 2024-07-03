#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x); 
        }
        int maxCount = INT_MIN;
        int minCount = INT_MAX;
        int count=1;
        for(int i = 0; i<n-1 ; i++){
            int diff = abs(v[i]-v[i+1]);
            if(diff<=2){
                count++;
            }
            else{
                maxCount = max(maxCount,count);
                minCount = min(minCount,count);
                count=1;
            }
        }
        maxCount = max(maxCount,count);
        minCount = max(minCount,count);
        cout << minCount << " " << maxCount << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}