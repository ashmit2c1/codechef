#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())

void solution(int test){
    while(test--){
        string s1;string s2;
        cin >> s1 >> s2;
        lint max=0;lint min=0;
        forloop(0,s1.size()){
            if (s1[i] != '?' && s2[i] != '?' && s1[i] != s2[i]) {
                max++; min++;
            }
            else if ((s1[i] != '?' && s2[i] == '?') || (s1[i] == '?' && s2[i] != '?')) {
                max++;
            }
            else if (s1[i] == '?' && s2[i] == '?') {
                max++;
            }
        }
        cout << min << " " << max << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}
