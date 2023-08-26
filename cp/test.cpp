#include <bits/stdc++.h>
using namespace std;
int ans(string A){
	int n=A.length();
    string v="";
    int c=0;
    for(int i=0;i<n;i++){
        if (isalnum(A[i])){
            v[c] = tolower(A[i]);
            //cout<<abs(A[i]-A[n-1-i]);
            c++;
        }
    }
    
    int ans=1;
   // cout<<v<<endl;
    for(int i=0;i<=c/2;i++){
        cout<<abs(v[i]-v[c-1-i])<<endl;
        if(v[i]!=v[c-1-i]){
            ans=0;
            //cout<<v[i]<<endl;
        }
        else
        ans=1;
    }
    return ans;
}
int main() {
	string A="1a2";

	int k=ans(A);
	cout<<k<<endl;
	return 0;
}