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

lint solveFunction(lint n,lint m,vector<lint>&arr){
    lint sum=0;
    forloop(0,n){
        if(arr[i]>m/2){
            sum+=abs(arr[i]-1);
        }
        else{
            sum+=abs(arr[i]-m);
        }
    }
    return sum;
}
void solution(int test){
    while(test--){
        lint n;lint m;
        cin >> n >> m;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        lint ans=solveFunction(n,m,arr);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}