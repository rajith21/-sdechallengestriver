/*****************************************************

    Following is the Binary Tree node structure:
    
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
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/
void rec(BinaryTreeNode<int>* root, vector<int>& pr , vector<int>& po){
    if(root==NULL){
        return ;
    }
    pr.push_back(root->data);
    if(root->left!=NULL){
        rec(root->left,pr,po);
    }
    rec(root->right,pr,po);
    po.push_back(root->data);
    return ;
    
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    
    vector<int>pr;
    vector<int>po;
    
   rec(root,pr,po);
    for(int i=0;i<pr.size();i++){
        if(pr[i]!=po[pr.size()-1-i]){
            return false;
        }
    }
    return true;
}
