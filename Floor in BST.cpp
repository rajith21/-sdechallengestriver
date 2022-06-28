/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int rec(TreeNode<int>* root, int x,int pr){
    if(root->val>x){
        if(root->left) return rec(root->left, x, pr);
        else return pr;
    }
  
    if(root->val==x){
        return root->val;
    }
    if(root->val<x){ 
        if(root->right==NULL){
            return root->val;
        }else {
            return rec(root->right,x,root->val);
        }
    }
}
int floorInBST(TreeNode<int> * root, int X)
{
   return rec(root,X,0);
}
