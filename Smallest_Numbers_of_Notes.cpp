#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
	    int n, count100, count50, count10, count5, count2, count1, count;
	    cin>>n;
	    
	    //number of rs.100 notes
	    count100= n/100;
	    n=n%100;
	    
	    //number of rs.50 notes
	    count50= n/50;
	    n=n%50;
	    
	    //number of rs.10 notes
	    count10= n/10;
	    n=n%10;
	    
	    //number of rs.5 notes
	    count5= n/5;
	    n=n%5;
	    
	    //number of rs.2 notes
	    count2= n/2;
	    n=n%2;
	    
	    //number of re 1 notes
	    count1= n/1;
	    
	    count= count1 + count2 + count5 + count10 + count50 + count100;
	    cout<<count<<endl;
	}
}

int main(){
    int test;
    cin >> test;
    solution(test);
}