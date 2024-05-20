#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int z,y,a,b,c;
        cin >> z >> y >> a >> b >> c;
        int rem = z-y;
        int tot = a+b+c;
        if(rem>=tot){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}