#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int arr[3];
        int x;
        cin >> x ;
        int n = 3;
        for(int i = 0; i<n ; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        cout << (x-1)*arr[0] + arr[1] << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}