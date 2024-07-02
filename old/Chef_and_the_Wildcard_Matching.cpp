#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        string a;
        string b;
        cin >> a >> b;
        int n = a.size();
        bool flag = true;
        for(int i = 0; i<n ; i++){
            if(a[i]!=b[i] && a[i]!='?' &&b[i]!='?'){
                flag = false;
            }
        }
        if(flag==true){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}