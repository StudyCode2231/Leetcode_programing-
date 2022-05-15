#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
void print(Node*head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;


    }
    cout<<endl;

}
Node* takeInptBetter(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
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
int length(Node *head)
{
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count; //Write your code here
}
void PrintIthNode(Node* head,int i ){
    int data;
    Node*curr=head;
    int count=0;
    while(curr!=NULL){
        if(count<=i){
            cout<<curr->data<<" ";
            return;
        }
        count++;
        curr=curr->next;

    }

}
int main(){
    Node*head=takeInptBetter();
    int pos;
    cin>>pos;
    PrintIthNode(head,pos);
    cout<<endl;



}