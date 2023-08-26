#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout << "Sorted Array" << endl;
    for (int i = 0; i < n; i++) {

        cout << arr[i] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // cout << arr[1];
    insertionsort(arr, n);
}
