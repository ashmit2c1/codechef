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
        int petrolStole = 0;
        int petrolhas = 0;
        for(int i = 0; i<n ; i++){
            petrolStole+=v[i];
            petrolhas+=v[i];
            petrolhas--;
            if(petrolhas<0){
                break;
            }
        }
        cout << petrolStole << "\n";


    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}