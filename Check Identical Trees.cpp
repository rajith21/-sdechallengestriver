/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>

    class BinaryTreeNode {
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

***********************************************************/

bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
      if(root1==NULL&&root2==NULL){
          return true;
      }if(root1==NULL&&root2!=NULL){
          return false ;
      }
    if(root1!=NULL&&root2==NULL){
        return false;
    }
    if(root1->data==root2->data){
        if(root1->left!=NULL&&root2->left!=NULL){
           if( identicalTrees(root1->left,root2->left)==false ){
               return false;
           }
        }else if(root1->left==NULL&&root2->left!=NULL){
            return false;
        }else if(root1->left!=NULL&&root2->left==NULL){
            return false;
        }
        if(root1->right!=NULL&&root2->right!=NULL){
           if( identicalTrees(root1->right,root2->right)==false ){
               return false;
           }
        }else if(root1->right==NULL&&root2->right!=NULL){
            return false;
        }else if(root1->right!=NULL&&root2->right==NULL){
            return false;
        }
        
        return true;
    }return false;
}
