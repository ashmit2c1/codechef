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
lint solveFunction(lint n,lint x,lint s){
    lint inBox=x;lint otherBox=0;
    forloop(1,s+1){
        lint a;lint b;
        cin >> a >> b;
        if(inBox==a){inBox=b;}
        else if(inBox==b){inBox=a;}
    }
    return inBox;
}
void solution(int test){
    while(test--){
        lint n;lint x;lint s;
        cin >> n >> x >> s;
        lint ans=solveFunction(n,x,s);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}