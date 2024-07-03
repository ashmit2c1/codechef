#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
	    int n;
	    cin >> n;
	    int A[n] , B[n];
	    for (int j = 0; j < n; j++){
	        cin >> A[j];
	    }
	    for (int j = 0; j < n; j++){
	        cin >> B[j];
	    }
	    int count = 0;
	    if (B[0] <= A[0]) count++;
	    for (int j = 1; j < n;j++){
	        if (B[j] <= A[j] - A[j - 1]) count++; 
	    }
	    cout << count << endl;
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}