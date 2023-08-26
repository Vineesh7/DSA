#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int start, int mid, int end) {
    int temp[end - start + 1];
    int i = start, j = mid + 1, k = 0;
    while (i <= mid && j <= end) {
        /* code */
        if (arr[j] <= arr[i]) {
            temp[k] = arr[j];
            k++;
            j++;
        } else {
            temp[k] = arr[i];
            k++;
            i++;
        }
    }
    while (i <= mid) {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= end) {
        temp[k] = arr[j];
        k++;
        j++;
    }
    for (i = start; i <= end; i += 1) {
        arr[i] = temp[i - start];
    }
}
void mergesort(int *arr, int start, int end) {

    if (start < end) {
        int mid = (start + end) / 2;
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void printarray(int *arr, int n) {
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
    int start = 0, end = n - 1;

    mergesort(arr, start, end);
    printarray(arr, n);
}