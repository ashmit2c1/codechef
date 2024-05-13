#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        float n,x,y,a,b;
        cin >> n >> x >> y >> a >> b;
        float numPet = n/a;
        float numDis = n/b;
        float costPet = numPet*x;
        float costDis = numDis*y;
        if(costPet>costDis){
            cout << "DIESEL" << "\n";
        }
        else if(costPet==costDis){
            cout << "ANY" << "\n";
        }
        else{
            cout << "PETROL" << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}