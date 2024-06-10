#include<bits/stdc++.h>
using namespace std;
void solution(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        int n = s.size();
        int n2 = a.size();
        int count=0;
        for(int i = 0; i<n ; i++){
            for(int j=0;j<n2;j++){
                if(s[i]==a[j]){
                    count++;
                }
            }
        }
        if(count==a.size()){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }

}
int main(){

    solution();
}