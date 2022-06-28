/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public: 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/

void rec(vector<int>&v,BinaryTreeNode<int>* root){
    if(root==NULL){
        return ;
    }
    if(root->left!=NULL){
        rec(v,root->left);
    }
    v.push_back(root->data);
    rec(v,root->right);
    
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
     vector<int>v;
    rec(v,root);
    int st=0,en=v.size()-1;
    while(st<en){
        if(v[st]+v[en]==k){
            return true;
        }
        if(v[st]+v[en]<k){
            st++;
        }
        if(v[st]+v[en]>k){
            en--;
        }
    }
    return false;
}
