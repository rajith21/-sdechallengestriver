class Solution {
public:
    void rec(TreeNode* root, vector<int> & ans){
        if(root==NULL){
            return ;
        }
        if(root->left!=NULL){
              rec(root->left,ans);
        }
        ans.push_back(root->val);
         rec(root->right,ans);
        
      
    }
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int>ans;
        rec(root,ans);
        
        return ans;
         
       
    }
};
