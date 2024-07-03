#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n,m;
        cin >> n >> m;
        int x,y;
        cin >> x >> y;
        string ans;
        for(int i = 0; i<n ; i++){
            string s;
            cin >> s;
            int fullySolved = 0;
            int partiallySolved = 0;
            int w = s.size();
            for(int i=0;i<w;i++){
                if(s[i]=='F'){
                    fullySolved++;
                }
                if(s[i]=='P'){
                    partiallySolved++;
                }
            }
            if(fullySolved>=x || (fullySolved==(x-1)&&partiallySolved>=y)){
                ans+='1';
            }
            else{
                ans+='0';
            }
        }
        cout << ans << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}