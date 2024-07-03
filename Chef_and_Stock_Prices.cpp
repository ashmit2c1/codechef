#include<bits/stdc++.h>
using namespace std;
void solution(int test){
    while(test--){
        float price;
        float rangeA;
        float rangeB;
        float change;
        cin >> price >> rangeA >> rangeB >> change;
        if(change>0){
            price = price + (change*price/100);
        }
        else{
            price = price - (abs(change)*price/100);
        }
        if(price >= rangeA && price <= rangeB){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}