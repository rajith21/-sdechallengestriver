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
BinaryTreeNode<int>* root1;
BinaryTreeNode<int>* temp;
void re(BinaryTreeNode<int>* root){
    if(root==NULL){
        return ;
    }
    if(root->left!=NULL){
        re(root->left);  
    }
    if(root1!=NULL){
        root1->right = new BinaryTreeNode<int>(root->data);
        root1->right->left=root1;
        root1=root1->right;
        
    }else{
        root1=new BinaryTreeNode<int>(root->data);
        temp=root1;
    }
        re(root->right);
   
   
}
BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
     root1=NULL;
     re(root);
    return temp;
}
