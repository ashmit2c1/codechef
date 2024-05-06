    #include<bits/stdc++.h>
    using namespace std;
    void solution(int test){
        while(test--){
            int n;
            cin >> n;
            vector<int> v;
            for(int i = 0; i<n ; i++){
                int x;
                cin >> x;
                v.push_back(x);
            }
            bool flag = false;
            for(int i = 1; i<n ; i++){
                if(v[i]<v[i-1]){
                    flag = true;
                    break;
                }
            }
            if(flag==true){
                cout << "No" << "\n";
            }
            else{
                cout << "Yes" << "\n";
            }

        }
    }
    int main(){
        int test;
        cin >> test;
        solution(test);
    }