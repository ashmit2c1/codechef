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
lint findSum(lint n){
    lint ans=0;
    while(n!=0){
        ans+=n%10;n/=10;
    }
    return ans;
}
lint solveFunction(lint n){
    lint sum=findSum(n);
    if(sum%2==0){
        lint secondSum=findSum(n+1);
        if(secondSum%2==1){return n+1;}
        else{return n+2;}
    }
    if(sum%2==1){
        lint secondSum=findSum(n+1);
        if(secondSum%2==0){return n+1;}
        else{return n+2;}
    }

}
void solution(int test){
    while(test--){
        lint n;
        cin >> n;
        lint ans = solveFunction(n);
        print(ans);
    }
}

int main(){
    int test;
    cin >> test;
    solution(test);
}