/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
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
    TreeNode<int>* root=new TreeNode<int>(preorder[pren]);
    int ind=m[preorder[pren]];
    int co=ind-inst;
    root->left=build(m,inorder, inst, ind-1, preorder, prst, prst+co-1);
    root->right=build(m, inorder, ind+1, inen,preorder,  prst+co,pren-1);
    return root;
    
}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	  map< int , int > m;
    for(int i=0;i<inOrder.size();i++){
        m[inOrder[i]]=i;
    }// Write your code here.
    return build(m, inOrder, 0, inOrder.size()-1, postOrder, 0, postOrder.size()-1);
}
