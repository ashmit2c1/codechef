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

bool solveFunction(vector<lint>&arr){
    lint n=arr.size();
    bool swapped=false;
    forloop(0,n-1){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            break;
        }
    }
    forloop(0,n-1){
        if(arr[i]>arr[i+1]){return false;}
    }
    return true;
}

/*bool solveFunction(vector<lint>&arr){
    lint n=arr.size();
    lint cnt=0;
    forloop(0,n){
        secondfor(i+1,n){
            if(arr[i]>arr[j]){cnt++;}
        }
    }
    if(cnt<=1){return true;}else{return false;}
}*/
void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        bool ans=solveFunction(arr);
        if(ans==true){print("YES")}else{print("NO")}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}