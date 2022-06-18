/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int getMaxWidth(TreeNode<int> *root)
{
     queue<TreeNode<int>*>q;
     int ans=0;
    if(root==NULL){
        return ans;
    }
    q.push(root);
    ans=1;
    while(!q.empty()){
        int x=q.size();
        ans=max(ans,x);
        while(x){
            TreeNode<int> *temp1=q.front();
            q.pop();
            if(temp1->left!=NULL){
                q.push(temp1->left);
            }
            if(temp1->right!=NULL){
                q.push(temp1->right);
            }
                x--;
        }
        
    }
    return ans;
}
