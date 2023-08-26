#include <bits/stdc++.h>
using namespace std;

int add(vector<int > &v,int k ){
    v.push_back(k);
    return k;
}

int main(){
    int n=3;
    int arr[]={4,6,5};
    int ans[3]={0};
    vector<int> v;
    add(v,5);
    cout<<v[0]<<endl;
    for (int i = 0; i < n; i++)
    {
        // int j=0;
        int temp=1;
        for(int j=0;j<n;j++){
            if(j==i)
            continue;
            temp=temp*arr[j];
        }
        ans[i]=temp;
    }
    for(auto i:ans){
        cout<<i<<endl;
    }

    return 0;
}