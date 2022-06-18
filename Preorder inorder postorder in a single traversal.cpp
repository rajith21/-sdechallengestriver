/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/
void rec(vector<int>& po, vector<int> & pr, vector<int> & in,BinaryTreeNode<int> *root ){
    if(root==NULL){
        return ;
    }
    pr.push_back(root->data);
    if(root->left!=NULL){
        rec(po,pr,in,root->left);
    }
    in.push_back(root->data);
    rec(po,pr,in,root->right);
    po.push_back(root->data);
    
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<int> pr;
      vector<int> po;
      vector<int> in;
       rec(po,pr,in,root);
    vector<vector<int>>ans;
    ans.push_back(in);
    ans.push_back(pr);
    ans.push_back(po);
    return ans;
    // Write your code here.
}
