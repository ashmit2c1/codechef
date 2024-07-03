#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int x1,x2,y1,y2,z1,z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        if((x2>=x1)&&(y2>=y1)&&(z1>=z2))
        {
            cout<<"YES"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}