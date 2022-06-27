/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/
#include<queue>
void connectNodes(BinaryTreeNode< int > *root) {
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    if(root==NULL){
        return ;
    }
     
        
    while(!q.empty()){
       BinaryTreeNode<int>* temp1=q.front();
        q.pop();
        int x=q.size();
        if(temp1->left!=NULL){
            q.push(temp1->left);
        }
        if(temp1->right!=NULL){
            q.push(temp1->right);
        }
        while(x){
            BinaryTreeNode<int>* temp2=q.front();
            q.pop();
            temp1->next=temp2;
            temp1=temp2;
            x--;
            if(temp1->left!=NULL){
                q.push(temp1->left);
            }
            if(temp1->right!=NULL){
                q.push(temp1->right);
            }
            
        }
    }
    // Write your code here.
}
