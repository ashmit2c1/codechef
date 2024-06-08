#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            a.push_back(x);

        }
        int boast = 0;
        for(int i = 0; i<n ; i++){
            int high =0;
            int low = 0;
            
            for(int j=0;j<n;j++){
                if(a[j]<=a[i]){
                    high++;
                }
                else{
                    low++;
                }
            }
            if(high>low){
                boast++;
            }
        }
        cout << boast << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}