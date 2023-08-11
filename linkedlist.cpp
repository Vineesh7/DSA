#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

void insertatbeg(Node*& head, int data) {
    Node* n = new Node(data);
    if (head == NULL) {
        head = n;
    }
    else {
        n->next = head;
        head = n;
    }
}

void search(Node* head, int x){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==x){
            cout<<"It's there"<<endl;
            break;
        }
        temp=temp->next;

    }
    if(temp==NULL){
        cout<<"not there"<<endl;
    }
}

void insertend(Node*& head, int data) {
    Node* n = new Node(data);
    if (head == NULL) {
        head = n;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void printlist(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "-->";
        temp = temp->next;
    }
}

void insertatpos(Node*& head, int data, int pos){
    Node * n = new Node(data);
    if(pos==0)
        insertatbeg(head,data);
    else{
        Node* temp=head;
        for(int i=0; i<pos-1;i++){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
    }
}

void deletenode(Node*& head, int x){
    Node * temp =head;

    while(temp!=NULL){
        Node* next=temp->next;
        if (next->data==x){
            break;
        }
        temp=temp->next;
    }
    temp->next=temp->next->next;
    temp->next->next=NULL;
}

void reverse(Node*& head){
    Node* curr=head;
    Node* prev=NULL;
    Node * N;
    while (curr!=NULL)
    {
        N=curr->next;
        curr->next=prev;
        prev=curr;
        curr=N;
    }
    head=prev;
}

int main() {
    Node* head = NULL;
    insertatbeg(head, 2);
    insertatbeg(head, 1);
    insertend(head, 4);
    insertatpos(head,3,2);
    printlist(head);
    search(head,4);
    search(head,5);
    deletenode(head,3);
    printlist(head);
    reverse(head);
    printlist(head);
    return 0;
}