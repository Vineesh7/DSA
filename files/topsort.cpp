#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> g[], int s, int d) {
    g[s].push_back(d);
}

void topsort(vector<int> g[],int n,vector <int> indegree){
    for(int i=0;i<n;i++){
        for(auto nbr:g[i])
            indegree[nbr]++;
    }
    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0)
            q.push(i);
    }
    while(!q.empty()){
        int node=q.front();
        cout<<node<<endl;
        q.pop();
        for(auto nbr:g[node]){
            indegree[nbr]--;
            if(indegree[nbr]==0)
            q.push(nbr);
        }
        
    }
}

int main(){
    int n=6;
    vector<int> g[n];
    vector<int> indegree(n,0);
    addEdge(g,0,2);
    addEdge(g,2,3);
    addEdge(g,3,5);
    addEdge(g,4,5);
    addEdge(g,1,4);
    addEdge(g,1,2);

    topsort(g,n,indegree);

    return 0;
}