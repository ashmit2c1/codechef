#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        int start =0 ;
        int end = n+1;
        while(start<end){
            start++;
            end--;
        }
        cout << end << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}