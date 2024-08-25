#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solution(int test){
    while(test--){
        int n=3;vector<int>dragon;vector<int>sloth;
        for(int i = 0; i<n ; i++){ll x;cin >> x;dragon.push_back(x);}
        for(int i = 0; i<n ; i++){ll x; cin >> x; sloth.push_back(x);}
        ll dragonSum=0;ll slothSum=0;
        for(int i = 0; i<n ; i++){dragonSum+=dragon[i];slothSum+=sloth[i];}
        if(dragonSum==slothSum && dragon[0]==sloth[0] && dragon[1]==sloth[1] && dragon[2]==sloth[2] ){cout << "TIE" << "\n";}
        else if(dragonSum>slothSum){cout << "DRAGON" <<"\n";}
        else if(slothSum>dragonSum){cout << "SLOTH" <<"\n";}
        else if(dragon[0]>sloth[0]){cout << "DRAGON" <<"\n";}
        else if(dragon[1]>sloth[1]){cout << "DRAGON" <<"\n";}
        else if(dragon[0]<sloth[0]){cout << "SLOTH" <<"\n";}
        else if(dragon[1]<sloth[1]){cout << "SLOTH" <<"\n";}
        else if(dragon[2]<sloth[2]){cout << "SLOTH" <<"\n";}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}