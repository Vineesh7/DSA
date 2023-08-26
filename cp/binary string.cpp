#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string &binary, vector<string> req) {
    int n = binary.length();
    vector<int> b(req.size(), 0);
    for (int i = 0; i < req.size(); i++) {
        if (req[i] == "c") {
            int ans = 0;
            for (int i = 0; i < n; i++) {
                if (binary[i] == '1') {
                    ans++;
                }
            }
            b[i] = ans;
            cout << binary << endl;
        }
        if (req[i] == "f") {
            int left = 0;
            for (int i = 0; i < n; i++) {
                if (binary[i] == '0') {
                    left = i;
                    break;
                }
            }
            b[i] = left;
            for (int i = 0; i <= left; i++) {
                if (binary[i] == '0') {
                    // cout<<"blagsdgg";
                    binary[i] = '1';
                }
                if (binary[i] == '1') {
                    binary[i] = '0';
                }
            }
            cout << binary << endl;
        }
    }

    return b;
}

int main() {
    string binary = "101000";
    vector<string> req = {"c", "f", "f", "f", "c"};
    vector<int> b = solution(binary, req);
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }

    return 0;
}