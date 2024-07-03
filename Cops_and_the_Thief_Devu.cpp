#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        int M, x,y;
        cin >> M >> x >> y;
        vector<int> copsAt;
        for(int i = 0; i<M ; i++){
            int x;
            cin >> x;
            copsAt.push_back(x);
        }
        int distance = x*y;
        int count=0;
        for(int i = 1; i<=100 ; i++){
            bool safe=true;
            for(int j = 0; j<M ; j++){
                int leftRange = max(copsAt[j]-distance, 1);
                int rightRange = min(copsAt[j]+distance,100);
                if(i<=rightRange && i>=leftRange){
                    safe=false;
                }

            }
            if(safe==true){
                count++;
            }
        }
        cout << count << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}