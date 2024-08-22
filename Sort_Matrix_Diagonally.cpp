#include<bits/stdc++.h>
using namespace std;

void sortMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    
    // Sort diagonals starting from the first row
    for (int k = 0; k < m; k++) {  // Outer loop for each diagonal starting from the first row
        vector<int> diagonal;
        
        // Collect diagonal elements
        int i = 0;
        for (int j = k; j < m && i < n; j++) {  // Inner loop to collect elements in the diagonal
            diagonal.push_back(matrix[i][j]);
            i++;
        }
        
        // Sort the collected diagonal
        sort(diagonal.begin(), diagonal.end());
        
        // Place sorted elements back in the matrix
        i = 0;
        for (int j = k; j < m && i < n; j++) {  // Inner loop to place sorted elements back
            matrix[i][j] = diagonal[i];
            i++;
        }
    }
    
    // Sort diagonals starting from the first column
    for (int k = 1; k < n; k++) {  // Outer loop for each diagonal starting from the first column
        vector<int> diagonal;
        
        // Collect diagonal elements
        int j = 0;
        for (int i = k; i < n && j < m; i++) {  // Inner loop to collect elements in the diagonal
            diagonal.push_back(matrix[i][j]);
            j++;
        }
        
        // Sort the collected diagonal
        sort(diagonal.begin(), diagonal.end());
        
        // Place sorted elements back in the matrix
        j = 0;
        for (int i = k; i < n && j < m; i++) {  // Inner loop to place sorted elements back
            matrix[i][j] = diagonal[j];
            j++;
        }
    }
}

void solution(){
    int n;int m;
    cin >> n >> m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<m ; j++){
            cin >> matrix[i][j];
        }
    }
    sortMatrix(matrix);
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<m ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << '\n';
    }
}
int main(){

    solution();
}