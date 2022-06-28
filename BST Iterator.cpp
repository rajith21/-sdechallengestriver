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
#include<stack>
class BSTiterator
{
   public:
    stack<TreeNode<int>*>s;
    BSTiterator(TreeNode<int> *root)
    {
       while(root->left){
           s.push(root);
           root=root->left;
       }
         s.push(root);
    }

    int next()
    {
        TreeNode<int>* Root=s.top();
        s.pop();
        int x=Root->data;
        if(Root->right!=NULL){
            Root=Root->right;
            while(Root->left){
              s.push(Root);
              Root=Root->left;
           }
             s.push(Root);
        }
        return x;
    }

    bool hasNext()
    {
        return !s.empty();
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/
