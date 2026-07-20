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
    cout<<"Before deletion last node:"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
    //Deletion of 1st node
    second->next=NULL;
    delete third;
    
    temp=head;
    cout<<"After deletion last node:"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}
