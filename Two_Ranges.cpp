#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        set<int> s;
        for(int i = a; i<=b ; i++){
            s.insert(i);
        }
        for(int i = c; i<=d ; i++){
            s.insert(i);
        }
        int k=0;
        for(int i : s){
            k++;
        }
        cout << k << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}