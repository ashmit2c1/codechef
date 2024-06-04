#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n = 3;
        vector<int> player1;
        vector<int> player2;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            player1.push_back(x);
        }
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            player2.push_back(x);
        }
        int count1=0;
        int count2=0;
        for(int i = 0; i<n ; i++){
            if(player1[i]>player2[i]){
                count1++;
            }
            if(player1[i]<player2[i]){
                count2++;
            }
        }
        if(count1>count2){
            cout << "A" <<" \n";
        }
        else{
            cout << "B" <<"\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}