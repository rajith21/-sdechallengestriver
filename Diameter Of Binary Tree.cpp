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
int rec1(TreeNode<int> * root){
     if(root==NULL){
        return 0;
    }
     int lefhei=rec1(root->left);
    int righei=rec1(root->right);
    return 1+max(lefhei,righei);
    
}
int rec(TreeNode<int> * root){
    if(root==NULL){
        return 0;
    }
    int lefhei=rec1(root->left);
    int righei=rec1(root->right);
    return lefhei+righei;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
    queue<TreeNode<int> *>q;
    int ans=0,c;
    q.push(root);
    while(!q.empty()){
        TreeNode<int> * temp=q.front();
        c=rec(temp);
        ans=max(ans,c);
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
	return ans;
}
