class Solution {
public:
    void rec(vector<int>& ans, TreeNode* root){
        if(root==NULL){
            return ;
        }
        ans.push_back(root->val);
        if(root->left!=NULL){
            rec(ans, root->left);
        }
         rec(ans, root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        rec(ans,root);
        return ans;
    }
};
