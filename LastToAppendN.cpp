#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }

};
int length(Node* head){
    Node*temp=head;
    int count =0;
    while (temp!=NULL)
    {
        /* code */
        count++;
        head=head->next;
    }
    return count;   
}
Node *appendToLastN(Node* head,int n){
    if(head==NULL){
        return 0;
    }
    Node *p=head;
    Node *q=head;
    int l=length(head);
    for(int i=1;i<l-n;i++){
        p=p->next;
    }
    for(int i=1;i<l;i++){
        q=q->next;
    }
    q->next=head;
    head=p->next;
    p->next=NULL;

    return head;

}
void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"";
        temp=temp->next;
    }
}
Node *takeInput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node*tail=NULL;
    while(data!=-1){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
int main(){
    Node*head=takeInput();
    int n;
    cin>>n;
    head=appendToLastN(head,n);
    print(head);
    return 0;
}