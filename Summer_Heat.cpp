#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int xa,xb,Xa,Xb;
        cin >> xa >> xb >> Xa >> Xb;
        int cocWater=0;
        int cocPulp=0;
        if(Xa%xa==0){
            cocWater=Xa/xa;
        }
        else{
            cocWater = (Xa/xa)+1;
        }
        if(Xb%xb==0){
            cocPulp=Xb/xb;
        }
        else{
            cocPulp=(Xb/xb)+1;
        }
        cout << cocWater+cocPulp << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}