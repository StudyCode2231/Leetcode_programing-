#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next=NULL;
    Node(int data){
        this->data=data;
        next=NULL;
    }

};
Node* print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return temp;
}
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/
bool check_palindrome(node* head)
{
        int l = length(head);
        node* t1 = head;
        int mid= l/2;
        bool isPalindrome= true; 
        
        for(int i = 0;i<=mid;i++) {
        t1= t1->next;
        }
        node* t2 = NULL;
         t2= t1->next;
         t1->next= NULL;
         while(t2->next!=NULL) {
             if(t2->data == t1->data) {
                 isPalindrome=true;
             }
             else {
                 isPalindrome=false;
             }
             t1=t1->next;
             t2=t2->next;
         }
         return isPalindrome;
}
int main(){
    Node *new_Node1=new Node(10);
    Node*head=new_Node1;
    Node *new_Node2=new Node(20);
    Node *new_Node3=new Node(30);
    new_Node1->next=new_Node2;
    new_Node2->next=new_Node3;
    print(head);
    


}