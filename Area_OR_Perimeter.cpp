#include<bits/stdc++.h>
using namespace std;
void solution(){
    int len;
    int bre;
    cin >> len >> bre;
    int area = len*bre;
    int peri = 2*(len+bre);

    if(area>peri){
        cout << "Area" << "\n";
        cout << area << "\n";
    }
    else if(peri>area){
        cout << "Peri" << "\n";
        cout << peri << "\n";
    }
    else{
        cout << "Eq" << "\n";
        cout << area << "\n";
    }

}
int main(){

    solution();
}