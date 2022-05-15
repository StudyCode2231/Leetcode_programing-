#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
Node* takeInput(){
    int data;
    cin>>data;
    Node *head=NULL;
    while(data!=-1){
        Node *newNode=new Node(data);
        if(head=NULL){
            head=newNode;
        }
        else{
            Node*temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
        cin>>data;
    }
    return head;

}
Node* length(Node* head){
    int count=0;
    Node* temp=head;
    if(temp!=NULL){
        count++;
        head=head->next;
    }
    return head;
}
Node* print(Node* head){
    Node* temp=head;
    if(temp!=NULL){
        cout<<temp->data<<"";
        temp=temp->next;
    }
    return head;
}
int main(){
    Node* head=takeInput();
    print(head);
}