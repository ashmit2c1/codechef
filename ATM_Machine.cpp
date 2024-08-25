#include<bits/stdc++.h>
using namespace std;
vector<int>findTrue(vector<int>&arr,int tot){
    int n=arr.size();vector<int>ans;
    for(int i = 0; i<n ; i++){
        if(arr[i]<=tot){
            tot=tot-arr[i];ans.push_back(1);
        }
        else{
            ans.push_back(0);
        }
    }return ans;
}
void solution(int test){
    while(test--){
        int n;int tot;
        cin >> n >> tot;
        vector<int>arr;
        for(int i = 0; i<n ; i++){
            int x;cin>>x;arr.push_back(x);
        }
        vector<int>ans=findTrue(arr,tot);
        for(int i=0;i<ans.size();i++){
            cout << ans[i];
        }
        cout << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}