#include <bits/stdc++.h>
using namespace std;

int getIndex(vector<int> v, vector<int> flag, int K) {
    int ans;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == K && flag[i]==0 ) {
            ans = i;
            break;
        }
    }
    return ans;
}
vector<int> twoSum(vector<int> &nums, int target) {
    int n = nums.size();
    vector<int> bruh;
    vector<int> flag(nums.size(), 0);
    for (int i = 0; i < n; i++)
        bruh.push_back(nums[i]);
    sort(nums.begin(), nums.end());
    int i = 0, j = n - 1;
    vector<int> ans(2, 0);
    while (i < j) {
        if (nums[i] + nums[j] > target) {
            j--;
        }
        if (nums[i] + nums[j] < target) {
            i++;
        }
        if (nums[i] + nums[j] == target) {
            ans[0] = getIndex(bruh, flag, nums[i]);
            flag[ans[0]]=1;
            ans[1] = getIndex(bruh, flag, nums[j]);
            break;
        }
    }
    return ans;
}
int main() {
    vector<int> a = {3, 3};
    int target = 6;
    vector<int> ans = twoSum(a, target);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}
