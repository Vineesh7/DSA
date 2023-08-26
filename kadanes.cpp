#include <bits/stdc++.h>
using namespace std;

int maxsubarraysum(vector<int> a) {
    int n = a.size();

    int sum = a[0], maxsum = a[0];

    for (int i = 1; i < n; i++) {
        sum = max(a[i], sum + a[i]);
        maxsum = max(sum, maxsum);
    }
    return maxsum;
}

int main() {
    vector<int> a = {-10};

    int ans = maxsubarraysum(a);
    cout << ans << endl;
    return 0;
}