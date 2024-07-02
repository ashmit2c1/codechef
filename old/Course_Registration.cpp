#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n; // students who want to enroll
        int m; // max capacity of the course
        int k; // students who have alredy enrolled 
        cin >> n >> m >> k;
        int space_left= m-k;
        if(n<=space_left)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}