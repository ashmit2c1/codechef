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

lint solveFunction(lint total,lint affected){
    lint unaffected = total-affected;
    if(affected>unaffected){return unaffected;}
    else{return affected;}
}
void solution(int test){
    while(test--){
        lint total;lint affected;
        cin >> total>>affected;
        lint ans=solveFunction(total,affected);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}