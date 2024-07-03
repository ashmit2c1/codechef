#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;
    int count = 0 ;
    int a,b;
    for(int i = 1 ; i < n ; i ++){
        a=i;
        b=n-i;
        if(a>0 && b>0){
            count++;
        }
    }
    cout << count << endl;
}
int main(){
    solution();
}