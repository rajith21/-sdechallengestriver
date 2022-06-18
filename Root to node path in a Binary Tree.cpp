/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool rec(int x, TreeNode* root,vector<int>& ans){
     if(root==NULL){
         return false;
     }
     if(root->val==x){
         ans.push_back(x);
         return true;
     }
     ans.push_back(root->val);
     if(root->left!=NULL){
         if(rec(x,root->left,ans)){
             return true;
         }
         
     }
     if(rec(x,root->right,ans)){
         return true;
     }
     ans.erase(ans.end()-1);
     return false;
     
 }
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>ans;
    bool a=rec(B,A,ans);
    return ans;
}
