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
lint solveFunction(string s){
    lint n=s.size();
    bool hasIndian=false;bool hasForegin=false;
    forloop(0,n){
        if(s[i]=='I'){hasIndian=true;break;}
        if(s[i]=='Y'){hasForegin=true;break;}
    }
    if(hasIndian==true){return 1;}
    if(hasForegin==true){return 2;}
    else{
        return 0;
    }
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        string s;cin>>s;
        lint ans=solveFunction(s);
        if(ans==1){print("INDIAN")}
        else if(ans==2){print("NOT INDIAN")}
        else{print("NOT SURE")}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}