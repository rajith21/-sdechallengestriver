/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
int hei(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int lefhei=hei(root->left);
    if(lefhei==-1){
        return -1;
    }
    int righei=hei(root->right);
    if(righei==-1){
        return -1;
    }
    if(abs(lefhei-righei)>1){
       return -1;
    }
    else{
        return 1+max(righei,lefhei);
    }
}

bool isBalancedBT(BinaryTreeNode<int>* root) {
   if(hei(root)==-1){
       return 0;
   }else return 1;
}
