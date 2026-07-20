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
    Node* fourth=new Node();
    
    head->data=10;
    second->data=20;
    third->data=30;
    fourth->data=40;
    
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    
    Node* temp=head;
    cout<<"Before reversing:"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
    
    //reversing the linked list
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    
    temp=head;
    cout<<"After reversing:"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}
