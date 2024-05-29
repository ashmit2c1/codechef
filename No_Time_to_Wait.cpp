#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n,h,x;
    cin >> n >> h >> x;
    vector<int> v;
    for(int i = 0; i<n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    bool flag = false;
    for(int i = 0; i<n ; i++){
        int sum=x;
        sum+=v[i];
        if(sum==h){
            flag = true;
            break;
        }
    }
    if(flag==true){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n"
;    }


}
int main(){

    solution();
}