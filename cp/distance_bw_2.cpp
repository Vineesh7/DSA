#include <bits/stdc++.h>
using namespace std;

int sol(vector<int> &A, vector<int> &B) {
    int res = 0;
    //cout << "hi" << endl;
    if (A.size() == 1 && B.size() == 1) {
        //cout << "hi" << endl;
        return res;
    }
    else {
        for (int i = 0; i < A.size()-1; i++) {
            res += max(abs(A[i] - A[i + 1]), abs(B[i] - B[i + 1]));
            //cout << "hi" << endl;
        }
        return res;
    }
}

int main() {
    vector<int> A = {-7, -13};
    vector<int> B = {1, -5};
    int res = 7;
    //cout << B.size() << endl;
    res = sol(A, B);
    cout << res << endl;
    return 0;
}