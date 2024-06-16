#include<bits/stdc++.h>
using namespace std;

void solution(int test){
    int arr[10] = {6,2,5,5,4,5,6,3,7,6};
    while(test--){
        int n1;
        int n2;
        cin >> n1 >> n2;
        int sum = n1+n2;
        int count=0;
        while(sum>0){
            int digit = sum%10;
            count = count+arr[digit];
            sum=sum/10;
        }
        cout << count << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}