#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n,k;
        cin >> n >> k;
        vector<int> motu;
        vector<int> tomu;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            if(i%2==0){
                motu.push_back(x);
            }
            else{
                tomu.push_back(x);
            }
        }
        sort(motu.begin(), motu.end());
        sort(tomu.begin(),tomu.end());
        reverse(motu.begin(),motu.end());
        int i =0 ;
        int j =0;
        while(k!=0 && i< motu.size() && j<tomu.size()){
            if(motu[i] > tomu[j]){
                swap(motu[i],tomu[j]);
                i++;
                j++;
            }
            k--;
        }
        int motuSum = 0;
        int tomuSum = 0;
        for(int i=0;i<motu.size();i++){
            motuSum+=motu[i];
        }
        for(int i = 0; i<tomu.size() ; i++){
            tomuSum+=tomu[i];
        }
        if(tomuSum>motuSum){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }


    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}