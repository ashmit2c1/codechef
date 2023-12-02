#include<bits/stdc++.h>
using namespace std;
void solution(int test){
	while(test--){
		int x;
		cin >> x;
		if(x%2==0 && x%7==0){
			cout << "Alice" << endl;
		}
		else if(x%2!=0 && x%9==0){
			cout << "Bob" << endl;
		}
		else{
			cout << "Charlie" << endl;
		}
	}
}
int main(){
	int test;
	cin >> test;
	solution(test);
}