#include<iostream>
using namespace std;

struct Node{
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
    
    int search,position=0;
    cout<<"Enter the element to be searched:";
    cin>>search;
    
    Node* temp=head;
    while(temp!=NULL){
        position++;
        if(temp->data==search){
            cout<<"Search position:"<<position;
            return 0;
        }
        temp=temp->next;
    }
    cout<<"Not exists";
    return 0;
}
