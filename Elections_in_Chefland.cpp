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
        vector<lint>arr;
        forloop(0,3){lint x;cin >> x;arr.push_back(x);}
        lint index=4;
        forloop(0,arr.size()){
            if(arr[i]>50){index=i;}
        }
        if(index==4){print("NOTA")}
        else if(index==0){print("A")}
        else if(index==1){print("B")}
        else{print("C")}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}