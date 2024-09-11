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

void solution(){
    lint a1;lint a2;
    lint b1;lint b2;
    lint c1;lint c2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cin >> c1 >> c2;
    lint a=max(a1,a2);
    lint b=max(b1,b2);
    lint c=max(c1,c2);
    print(a+b+c)


}
int main(){

    solution();
}