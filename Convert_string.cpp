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


lint findCount(string s){
    lint n=s.size();
    lint cnt0=0;
    forloop(0,n){
        if(s[i]=='0'){cnt0++;}
    }
    lint cnt1=n-cnt0;
    lint cnt=0;
    lint minVal=min(cnt1,cnt0);
    lint maxVal = max(cnt1,cnt0);
    forloop(1,n+1){
        if((i>=cnt1 && (i-cnt1)%2==0)&&(i>=cnt0 && (i-cnt0)%2==0)){cnt++;}
    }
    return cnt;

}

void solution(int test){
    while(test--){
        lint n;
        cin >> n;
        string s;
        cin >> s;
        lint ans=findCount(s);
        print(ans)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}