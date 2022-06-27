/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/
TreeNode<int>* se(vector<int> &p, int st, int en){
    if(st>en){
        return NULL;
    }
     TreeNode<int>* root=new TreeNode<int>(p[st]);
    int k=-1;
    for(int i=st;i<=en;i++){
        if(p[i]>p[st]){
            k=i;
            break;
        }
    }
    if(k!=-1){
        root->left=se(p,st+1,k-1);
        root->right=se(p,k,en);
    }else {
        root->left=se(p,st+1,en);
        root->right=NULL;
    }
    return root;
}    
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    return se(preOrder, 0, preOrder.size()-1);
}
