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
bool solveFunction(vector<lint>&arr){
    lint odd=0;
    forloop(0,arr.size()){if(arr[i]%2==1){odd++;}}
    if(odd%2==0 && odd!=0){return true;}else{return false;}
}
void solution(int test){
    while(test--){
        lint n;
        cin >> n;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        bool ans = solveFunction(arr);
        if(ans==true){print("YES")}else{print("NO")}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}