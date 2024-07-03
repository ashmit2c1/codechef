#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        string x;
        int barGoals,malGoals,madridGoals,eibarGoals;
        int n = 4;
        for(int i = 0; i<n ; i++){
            cin >> x;
            if(x=="Barcelona"){
                cin >> barGoals;
            }
            else if(x=="Malaga"){
                cin >> malGoals;
            }
            else if(x=="RealMadrid"){
                cin >> madridGoals;
            }
            else{
                cin >> eibarGoals;
            }
        }
        if(barGoals > eibarGoals && madridGoals < malGoals){
            cout <<"Barcelona" <<"\n";
        }
        else{
            cout << "RealMadrid" << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}