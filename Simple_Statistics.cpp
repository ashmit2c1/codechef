#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        double n,k;
        cin >> n >> k;
        vector<double> v;
        for(int i = 0; i<n ; i++){
            double x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        double sum = 0 ;
        for(int i=k;i<n-k;i++){
            sum+=v[i];
        }
        double average = sum / (n-2*k);
        cout << fixed << setprecision(6) <<  average << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}