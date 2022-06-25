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
bool rec(TreeNode<int> * root, int x , vector<int>& ans){
    if(root==NULL){
         return false;
     }
     if(root->data==x){
         ans.push_back(x);
         return true;
     }
     ans.push_back(root->data);
     if(root->left!=NULL){
         if(rec(root->left,x,ans)){
             return true;
         }
         
     }
     if(rec(root->right,x,ans)){
         return true;
     }
     ans.erase(ans.end()-1);
     return false;
}
int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	vector<int>vx;
    vector<int>vy;
    bool a=rec(root,x,vx);
    bool b=rec(root,y,vy);
    
 
    int z=min(vx.size(),vy.size());
    for(int i=0;i<z;i++){
        if(vx[i]!=vy[i]){
            return vx[i-1];
        }
    }
    if(vx.size()<vy.size()){
        return vx[z-1];
    }
    return vy[z-1];
}
