/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
TreeNode<int>* se(TreeNode<int>* root, int a, int b){
    int x=root->data;
    if((x<=a&&x>=b)||(x>=a&&x<=b)){
        return root;
    }
    if(x>=a){
       return  se(root->left,a,b);
    }else return se(root->right,a,b);
}
TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	return se(root, P->data,Q->data);
}
