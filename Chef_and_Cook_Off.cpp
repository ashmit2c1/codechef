#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n = 5;
        vector<int> v;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int sum = 0;
        for(int i = 0; i<n ; i++){
            sum+=v[i];
        }
        if(sum==0){
            cout << "Beginner" << "\n";
        }
        else if(sum==1){
            cout <<"Junior Developer" << "\n";
        }
        else if(sum==2){
            cout << "Middle Developer" << "\n";
        }
        else if(sum==3){
            cout << "Senior Developer" << "\n";
        }
        else if(sum==4){
            cout << "Hacker" << "\n";
        }
        else{
            cout <<"Jeff Dean" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}