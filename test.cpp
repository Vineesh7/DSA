#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int minmaxxor(vector<int> A){
    int n= A.size();
    vector<int> maxxor;
    for(int i=0;i<n;i++){
        int x= A[i];
        int maxxorval=0;
        for(int j=0;j<n;j++){
            maxxorval=max(maxxorval,(A[j]^x));
        }
        maxxor.push_back(maxxorval);
    }
    int ans=INT_MAX;
    for(auto i:maxxor){
        ans=min(ans,i);
    }
    return ans;
}
int main(){
    vector<int> A={1,2,3};
    int ans=minmaxxor(A);
    cout<<ans<<" ans"<<endl;
    return 0;
}