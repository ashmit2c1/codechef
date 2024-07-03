#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--){
        int x;
        int y;
        cin >> x >> y;
        if((x+y)%2==0 || (abs(x-y))%2==0){
            cout << "Janmansh" << endl;
        }
        else{
            cout << "Jay" << endl;
        }
    }
}