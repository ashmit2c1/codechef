#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n=3;
        int maxIndex=0;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int min=INT_MAX;
        for(int i = 0; i<n ; i++){
            if(v[i]<min){
                maxIndex=i;
                min = v[i];
            }
        }
        if(maxIndex==0){
            cout << "Draw" << "\n";
        }
        else if(maxIndex==1){
            cout << "Bob" << "\n";
        }
        else{
            cout << "Alice" << "\n";
        }


    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}