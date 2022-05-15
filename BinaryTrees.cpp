#include<bits/stdc++.h>
#include<queue>
using namespace std;
template<typename T>
class TreeNode{
    public:
    T data;
    TreeNode<T>*right;
    TreeNode<T>* left;
    TreeNode(T root){
        this->data=root;
        left=NULL;
        right=NULL;
    }
};
TreeNode<int>* takeInput(){
    int rootData;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    TreeNode<int>* root=new TreeNode<int>(rootData);
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int>* currentNode=q.front();
        q.pop();
        int leftchild,rightchild;
        cin>>leftchild;
        if(leftchild!=-1){
            TreeNode<int>* leftnode=new TreeNode<int>(leftchild);
            currentNode->left=leftnode;
            q.push(leftnode);
        } 
        cin>>rightchild;
        if(rightchild!=-1){
            TreeNode<int>*rightnode=new TreeNode<int>(rightchild);
            currentNode->right=rightnode;
            q.push(rightnode);
        }

    }
    return root;

}
void preorder(TreeNode<int>* root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(TreeNode<int>* root){
    if(!root){

        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" "<<"->";
}
void printLevelWise(TreeNode<int>* root){
    if(!root)
    return;
    queue<TreeNode<int>*> pn;
    pn.push(root);
     while(!pn.empty())
    {
        TreeNode<int> * front= pn.front();
        pn.pop();
        cout<<front->data<<":";
        
        if(front->left)
        {   
            pn.push(front->left);
            cout<<"L:"<<front->left->data<<",";
        }
         else
             cout<<"L:-1"<<",";
        
        if(front->right)
       {
            pn.push(front->right);
        	cout<<"R:"<<front->right->data<<endl;
        }
        else
             cout<<"R:-1"<<endl;// Write your code here
	}

}
int getSum(TreeNode<int>* root){
    //Base Case
    if(!root){
        return 0;
    }
    int sum=root->data;
    int Lsum=getSum(root->left);
    sum+=Lsum;
    int rsum=getSum(root->right);
    sum+=rsum;
    return sum;

}
/***************/
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
    TreeNode<int>*root=takeInput();
    printLevelWise(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    cout<<getSum(root);
    int a=isPalindrome(head);

}