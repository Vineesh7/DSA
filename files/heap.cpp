#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v,int val){
    v.push_back(val);
    int index=v.size() -1;
    int parent=index/2;
    while(index>1 and v[index]< v[parent] ){
        swap(v[index],v[parent]);
        index=parent;
        parent=parent/2;
    }
}

void min(vector<int> &v){
    cout<<v[1];
}

void heapify(vector<int> &v,int index){
    int child1 = 2*index;
    int child2=2*index+1;
    
    if(v[child1]<v[index] and child1 < v.size()){
    swap(v[child1],v[index]);
    heapify(v,child1);
    }
    if(v[child2]<v[index] and child2 < v.size()){
    swap(v[child2],v[index]);
    heapify(v,child2);
    }

}
void pop(vector<int> &v){
    int index=v.size()-1;
    swap(v[1],v[index]);
    v.pop_back();
    heapify(v,1);

}

int main(){
    vector<int> v;
    v.push_back(-1);
    insert(v,10);
    insert(v,4);
    insert(v,5);
    insert(v,2);
    min(v);
    pop(v);
    min(v);
    return 0;
}