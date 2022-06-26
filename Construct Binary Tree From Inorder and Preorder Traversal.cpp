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
#include<map>
TreeNode<int> * build(map <int ,int> & m, vector<int> &inorder, int inst, int inen,vector<int> &preorder, int prst, int pren  ){
    if(inst>inen||prst>pren){
        return NULL;
    }
    TreeNode<int>* root=new TreeNode<int>(preorder[prst]);
    int ind=m[preorder[prst]];
    int co=ind-inst;
    root->left=build(m,inorder, inst, ind-1, preorder, prst+1, prst+co);
    root->right=build(m, inorder, ind+1, inen,preorder,  prst+co+1,pren);
    return root;
    
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
    map< int , int > m;
    for(int i=0;i<inorder.size();i++){
        m[inorder[i]]=i;
    }
    return build(m, inorder, 0, inorder.size()-1, preorder, 0, preorder.size()-1);
}
