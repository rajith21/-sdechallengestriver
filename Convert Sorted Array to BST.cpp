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
TreeNode<int>* se(vector<int> & ar, int st, int en ){
    if(st>en){
        return NULL;
    }
    int x=(st+en)/2;
    TreeNode<int>* root=new TreeNode<int>(ar[x]);
    root->left=se(ar,st,x-1);
    root->right=se(ar,x+1,en);
    return root;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    return se(arr,0,n-1);
}
