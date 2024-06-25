#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int count=0;
        int n;
        cin >> n;
        set<int> s1;
        set<int> s2;

        for(int i = 0; i<n ; i++){
            int x,y;
            cin >> x >> y;
            s1.insert(x);
            s2.insert(y);
        }
        cout << s1.size() + s2.size() << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}