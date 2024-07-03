#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n,p,x,y;
        cin >> n >> p >> x >> y;
        vector<int> q;
        for(int i = 0; i<n ; i++){
            int x;
            cin >> x;
            q.push_back(x);
        }
        int pos = p-1;
        int sum = 0;
        for(int i=0;i<=pos;i++){
            if(q[i]==0){
                sum+=x;
            }
            else{
                sum+=y;
            }
        }
        cout << sum << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}