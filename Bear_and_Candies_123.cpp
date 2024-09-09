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
        lint limak;lint bob;
        cin >> limak >> bob;
        forloop(1,1001){
            if(i%2==1){limak-=i;if(limak<0){print("Bob")break;}}
            else{bob-=i;if(bob<0){print("Limak")break;}}
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}