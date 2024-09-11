#include<bits/stdc++.h>
using namespace std;
#define lint double
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
int findAns(lint d,lint x,lint y){
    if(x<=y){return 0;}
    lint cnt=-1;
    forloop(0,y){
        lint disc = i*d;
        if(disc>=100){disc=100;}
        lint price = x-(x*disc)/100;
        if(price<=y-i){cnt=i;break;}
    }
    return cnt;
}
void solution(int test){
    while(test--){
        lint x;lint y;lint d;
        cin >> d >> x >> y;
        int ans=findAns(d,x,y);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}