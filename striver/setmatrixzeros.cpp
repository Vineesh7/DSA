#include <bits/stdc++.h>
using namespace std;
#define lli long long int

void setzeros(int r, int c, vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++) {
        matrix[i][c] = 0;
    }
    for (int i = 0; i < n; i++) {
        matrix[r][i] = 0;
    }
}
void setZeroes(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                setzeros(i, j, matrix);
                i++;
                j++;
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int m = matrix.size();
    int n = matrix[0].size();
    setZeroes(matrix);
    for (int a = 0; a < m; a++) {
        for (int b = 0; b < n; b++) {
            cout << matrix[a][b] << " ";
        }
        cout << endl;
    }
    return 0;
}