#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    
    head->data=10;
    second->data=20;
    third->data=30;
    
    head->next=second;
    second->next=third;
    third->next=NULL;
    
    Node* temp=head;
    cout<<"Before Insertion at end:";
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
    Node* newNode=new Node();
    newNode->data=5;
    //Insertion at beginning
    newNode->next=NULL;
    third->next=newNode;
    
    temp=head;
    cout<<"After Insertion at end:";
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
