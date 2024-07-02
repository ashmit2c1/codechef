#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int n;
        cin >> n;
        int maxpoints = 3*(n-1);
        int matchleft = n-2;
        int maxWin;
        if(matchleft%2==0)
        {
            maxWin=matchleft/2;
        }
        else{
            maxWin=(matchleft/2)+1;
        }
        cout << maxpoints - (3*maxWin) << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}