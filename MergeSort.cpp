#include<bits/stdc++.h>
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
void printLevelATNewLine(TreeNode<int>* root) {
    queue<TreeNode<int>*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        TreeNode<int>* first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
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
TreeNode<int>* removeLeafNode(TreeNode<int>* root){
    if(root==NULL){
        return root;
    }
    if(root->left ==NULL && root->right==NULL){
        return NULL;
    }
    root->left=removeLeafNode(root->left);
    root->right=removeLeafNode(root->right);
    return root;
}
int main(){
    TreeNode<int>* root=takeInput();
    root=removeLeafNode(root);
    cout<<endl;
    printLevelATNewLine(root);
}