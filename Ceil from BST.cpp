/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
int rec(BinaryTreeNode<int> * root, int x, int pr){
    if(root->data>x){
        if(root->left!=NULL){
        return rec(root->left, x, root->data);
        }else return root->data;
    }
    if(root->data==x){
        return root->data;
    }
    if(root->data<x){
        if(root->right!=NULL){
            return rec(root->right, x, pr);
        }else return pr;
    }
}
int findCeil(BinaryTreeNode<int> *node, int x){
    return rec(node, x,-1);
}
