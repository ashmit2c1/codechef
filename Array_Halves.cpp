#include<bits/stdc++.h>
using namespace std;
void solution(long long test){
    while(test--){
        long long n ;
        cin >> n;
        long long size = 2*n;
        long long a[size];
        long long count=0;
        long long j = 0;
        for(long long i=0;i<size;i++){
            cin >> a[i];
            if(a[i]>n){
                count=count + n-i+j;
                j++;
            }
        }
        cout << count << "\n";

    }
}
int main(){
    long long test;
    cin >> test;
    solution(test);
}