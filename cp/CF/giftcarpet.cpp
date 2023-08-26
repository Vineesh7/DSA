#include <bits/stdc++.h>
using namespace std;
#define lli long long int


int main(){
    int t;
    cin>>t;
    vector<string> ans;
    while(t--){
        int n,m;
        
        cin>>n>>m;
        vector<vector<char>> carpet( n , vector<char> (m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>carpet[i][j];
            }
         
        }
        set<char> s;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(carpet[j][i]== 'v' or carpet[j][i]== 'i' or carpet[j][i]== 'k' or carpet[j][i]== 'a'){
                    s.insert(carpet[j][i]);
                    i++;
                }
            }
            
        }
        // for(auto i:s)
        //     cout<<i<<" s ";
        if((s.count('v')==0 or s.count('i')==0 or s.count('k')==0 or s.count('a')==0)){
            ans.push_back("NO");
        }
        else
            ans.push_back("YES");

        
    }
    for(auto i:ans)
        cout<<i<<endl;
    return 0;
}