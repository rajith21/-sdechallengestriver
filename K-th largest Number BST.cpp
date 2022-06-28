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
int c;
void rec(TreeNode<int>* root, int k, int* ans){
    if(root==NULL){
        return ;
    }
    if(root->right!=NULL){
        rec(root->right,k,ans);
    }
    c+=1;
    if(c==k){
        *ans=root->data;
        return ;
    }
    rec(root->left,k,ans);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    c=0;
    int ans=-1;
    rec(root,k,&ans);
    return ans;// Write your code here.
}
