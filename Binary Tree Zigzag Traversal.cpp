/*************************************************************

    Following is the Binary Tree node structure

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

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    deque<BinaryTreeNode<int> *>dq;
    vector<int>v;
    if(root==NULL){
        return v;
    }
    int k=1;
    dq.push_front(root);
   // v.push_back(root->data);
    while(!dq.empty()){
        k++;
        if(k%2==0){
            int x=dq.size();
            while(x){
                BinaryTreeNode<int> * temp=dq.front();
                 v.push_back(temp->data);
                dq.pop_front();
                if(temp->left){
                    dq.push_back(temp->left);
                }
                if(temp->right){
                    dq.push_back(temp->right);
                }
                x--;
            }
            
        }else {
             int x=dq.size();
            while(x){
                BinaryTreeNode<int> * temp=dq.back();
                dq.pop_back();
                 v.push_back(temp->data);
                if(temp->right){
                    dq.push_front(temp->right);
                }
                if(temp->left){
                    dq.push_front(temp->left);
                }
                x--;
            }
        }
    }
    return v;
}
