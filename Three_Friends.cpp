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
bool solveFunction(lint x,lint y,lint z){
    x=abs(x);y=abs(y);z=abs(z);
    if((x+y==z)||(y+z==x)||(z+x==y)){return true;}
    else{return false;}
}
void solution(int test){
    while(test--){
        lint x,y,z;cin >> x >> y >> z;
        bool ans=solveFunction(x,y,z);
        if(ans==true){print("yes")}
        else{print("no")}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}