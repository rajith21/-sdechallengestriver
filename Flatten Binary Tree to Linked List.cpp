/************************************************************

    Following is the TreeNode class structure.

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
TreeNode<int> * rec(TreeNode<int> *temp){
    if(temp==NULL){
        return NULL;
    }
    TreeNode<int>* root=new TreeNode<int>(temp->data);
    TreeNode<int>* root1=root;
    if(temp->left!=NULL){
        root->right=rec(temp->left);
        while(root1->right!=NULL){
            root1=root1->right;
        }
    }
      root1->right=rec(temp->right);
    return root;
}
TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    return rec(root);
}
