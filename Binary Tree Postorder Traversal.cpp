class Solution {
public:
    void rec(vector<int>& ans, TreeNode* root){
        if(root==NULL){
            return ;
        }
        if(root->left!=NULL){
            rec(ans,root->left);
        }
        rec(ans,root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        rec(ans, root);
        return ans;
    }
};
