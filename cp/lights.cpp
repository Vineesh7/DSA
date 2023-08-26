#include <bits/stdc++.h>
using namespace std;

int lights(vector<int> a, int b) {
    vector<int> l(a.size(),0);
    int count = 0;
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        /* code */
        //cout<<"hi"<<endl;
        if (a[i] == 1) {
            //cout<<"hiif"<<endl;
            for (int j = i - b + 1; j <= i + b - 1; j++) {
                /* code */
                //cout<<"hifor"<<endl;
                l[j] = 1;
            }
            count++;
            //cout<<"hicount"<<endl;
            //cout<<count<<endl;
            int sum = 0;
            for (int k = 0; k < l.size(); k++) {
                /* code */
                sum = sum + l[k];
            }
            cout<<sum<<endl;
            if (sum == a.size()) {
                break;
            }
        }
    }
    return count;
}
int main() {
    vector<int> a = {0, 0, 1, 1, 1, 0, 0, 1};
    //cout<<a.size()<<endl;
    int count = lights(a, 3);
    cout << count << endl;
}