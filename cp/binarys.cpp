#include <bits/stdc++.h>
using namespace std;

int Binarysearchlower(const vector<int> &A, int B, int start, int end) {
    while (start <= end) {
        int mid = (start + end) / 2;

        if (A[mid] == B) {
            end = mid;
        } else if (A[mid] < B) {
            start = mid + 1;
        } else if (A[mid] > B) {
            end = mid - 1;
        }
        if (A[mid] == B && start == end) {
            return start;
        }
    }
    return -1;
}
int Binarysearchhigher(const vector<int> &A, int B, int start, int end) {
    while (start <= end) {
        int mid = (start + end) / 2;

        if (A[mid] == B) {
            start = mid+1;
        } else if (A[mid] < B) {
            start = mid + 1;
        } else if (A[mid] > B) {
            end = mid - 1;
        }
    }
    if (A[end]==B){
        return end;
    }
    else{return -1;}
    
}
int main() {
    vector<int> A = {7, 7, 7, 7, 8, 8};
    int B = 8;
    int n = A.size();
    int start = 0;
    int end = n - 1;
    int k = Binarysearchlower(A, B, start, end);
    cout << k << endl;
    int l = Binarysearchhigher(A, B, start, end);
    cout << l << endl;
}
