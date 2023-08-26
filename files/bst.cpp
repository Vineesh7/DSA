#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int key;
    Node *left;
    Node *right;

    Node(int key) {
        this->key = key;
        left = right = NULL;
    }
};

Node *insert(Node *root, int key) {
    if (root == NULL) return new Node(key);
    if (key < root->key) {
        root->left = insert(root->left, key);
    }
    if (key > root->key) {
        root->right = insert(root->right, key);
    }
    return root;
}

void printBst(Node *root) {
    if (root == NULL) return;
    printBst(root->left);
    cout << root->key << " ";
    printBst(root->right);
}

bool searchBST(Node *root, int key) {
    if (root == NULL) return false;
    if (root->key == key) return true;
    if (key < root->key) searchBST(root->left, key);
    return searchBST(root->right, key);
}

void levelorderBST(Node* root){
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root); 
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()) q.push(NULL);
            continue;
        }
        cout<<temp->key<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
}

int main() {
    Node *root = NULL;
    int arr[] = {3, 5, 4, 1, 7, 8, 9, 2, 6};
    for (auto x : arr) {
        root = insert(root, x);
    }
    insert(root, 10);
    printBst(root);
    bool find = searchBST(root,0);
    cout<<endl<<find<<endl;
    levelorderBST(root);
    return 0;
}