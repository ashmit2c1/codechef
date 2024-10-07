#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())
#define intmax INT_MAX
#define intmin INT_MIN
#define lintmax LLONG_MAX
#define lintmin LLONG_MIN
#define mp(x,y) make_pair(x,y)
bool isPrime(int n){
    if(n==0 ||n==1){return false;}
    for(int i=2 ; i<= sqrt(n) ; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
vector<lint> solveFunction(lint n,lint m){
    vector<lint>ans;
    forloop(n,m+1){
        if(isPrime(i)==true){ans.push_back(i);}
    }
    return ans;
}
void solution(int test){
    while(test--){
        lint n;lint m;cin >> n >> m;
        vector<lint>ans=solveFunction(n,m);
        forloop(0,ans.size()){print(ans[i]);}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}