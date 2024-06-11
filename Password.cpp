#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    bool a1=false,a2=false,a3=false,a4=false;
	    if(str.length()>=10){
	        for(int i=0;i<str.length();i++){
	            if(str[i]>=65 && str[i]<=90){
	                if(i>0 && i<str.length()-1){
	                    a1=true;
	                }
	            }
	            if(str[i]>=97 && str[i]<=122){
	                a2=true;
	            }
	            if(str[i]=='@'||str[i]=='#'||str[i]=='%'||str[i]=='&'||str[i]=='?'){
	                if(i>0 && i<str.length()-1){
	                    a3=true;
	                }
	            }
	            if(str[i]>=48 && str[i]<=57){
	                if(i>0 && i<str.length()-1){
	                    a4=true;
	                }
	            }
	        }
	    }
	    else{
	        cout<<"NO"<<endl;
	        continue;
	    }
	    if(a1==true &&a2==true &&a3==true && a4==true){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}