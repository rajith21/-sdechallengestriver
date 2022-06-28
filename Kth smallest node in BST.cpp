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
int c;
void  rec(TreeNode<int>* root, int k,int* ans ){
    if(root==NULL){
        return ;
    }
    if(root->left!=NULL){
        rec(root->left,k,ans);
    }
     c+=1;
    if(c==k){
        *ans=root->data;
    }
       rec(root->right,k,ans);
   
}
int kthSmallest(TreeNode<int> *root, int k)
{
        c=0;
        int ans=0;
        rec(root,k,&ans);
        return ans;
}
