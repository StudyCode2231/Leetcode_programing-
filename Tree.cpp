#include<bits/stdc++.h>
using namespace std;

template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data){
        this->data=data;
    }
    ~TreeNode(){
        for(int i=0;i<children.size();i++){
            delete children[i];
        }
    }
};
int sumofNOde(TreeNode<int>* root){
    int sum=0;
    queue<TreeNode <int>*>pn;
    pn.push(root);
    while(pn.size()!=0){
        TreeNode<int>* front=pn.front();
        pn.pop();
         sum=sum+front->data;
         for(int i=0;i<front->children.size();i++){
             pn.push(front->children[i]);
         }
    }
    return sum;
}
TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}
int main(){
    TreeNode<int>* root=takeInputLevelWise();
    cout<<sumofNOde(root)<<" ";

}