#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;
    cin >> n;
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    if(count>3){
        cout << "More than 3 digits" << "\n";
    }
    else{
        cout << count << "\n";
    }

}
int main(){

    solution();
}