#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x;
	    cin>>x;
	    int arr[x];
	    map<int,int>mp;
	   for(int i=0;i<x;i++){
	       cin>>arr[i];
	       mp[arr[i]]++;
	   }
	   int sum=0;
	   for(auto i : mp){
	       sum =max(sum,(i.first+i.second-1));
	   }
	   cout<<sum<<endl;
	   
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}