#include<bits/stdc++.h>
using namespace std;
void solution(int n){
    while(n--){
        int size;
        cin >> size;
        int s[size];
        int d[size];
        for(int i = 0 ; i < size ; i++){
            cin >> s[i];
        }
        for(int i = 0 ; i < size ; i++){
            cin >> d[i];
        }
        int count =0 ;
        for(int i = 0;i< size ; i++){
            if(s[i]==d[i]){
                count++;
            }
        }
        cout << count << endl;
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}