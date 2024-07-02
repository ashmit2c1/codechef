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
        sort(v.begin(),v.end());
        int occ = 1;
        int maxOcc =1 ;
        for(int i = 0; i<n-1 ; i++){
            if(v[i]==v[i+1]){
                occ++;
                maxOcc=max(maxOcc,occ);
            }
            else{
                occ=1;
            }
        }
        int ans = n-maxOcc;
        cout << ans << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}