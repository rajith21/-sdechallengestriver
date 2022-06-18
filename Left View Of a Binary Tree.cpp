/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<queue>
vector<int> getLeftView(TreeNode<int> *root)
{
   queue<TreeNode<int>*>q;
     vector<int> ans;
    if(root==NULL){
        return ans;
    }
    q.push(root);
   
    while(!q.empty()){
        int x=q.size();
        TreeNode<int>* temp=q.front();
        ans.push_back(temp->data);
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        q.pop();
        x--;
        while(x){
            TreeNode<int> *temp1=q.front();
             q.pop();
             if(temp1->left!=NULL){
            q.push(temp1->left);
        }
        if(temp1->right!=NULL){
            q.push(temp1->right);
        }
            x--;
        }
        
    }
    return ans;
    //    Write your code here
}
