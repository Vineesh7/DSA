#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A, int k) {
    vector<int> prefix;
    vector<int> suffix;
    prefix[0]=A[0];
    sufffix[0]=A[A.size()-1];
    for (int i = 1; i < A.size(); i++)
    {
        /* code */
        prefix.push_back(prefix.back()+A[i]);
        suffix.push_back(suffix.back() + A[A.size()-i-1]);
        
    }
    

    return sum;
}

int main() {
    vector<int> A = {5, -2, 3, 1, 2};
    int k = 3;
    int x = solution(A, k);
    cout << x << endl;
}