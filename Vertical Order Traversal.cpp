/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/
#include<bits/stdc++.h>

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    queue<pair<TreeNode<int>*,pair<int,int>>>q;
    map<int , map <int,vector<int>>>m;
    q.push({root,{0,0}});
    while(!q.empty()){
      
            pair<TreeNode<int>*,pair<int,int>> temp=q.front();
            TreeNode<int>* no=temp.first;
            int v=temp.second.first;
            int l=temp.second.second;
            m[v][l].push_back(no->data);
            if(no->left!=NULL){
                q.push({no->left,{v-1,l+1}});
            }
            if(no->right!=NULL){
                q.push({no->right,{v+1,l+1}});
            }
            q.pop();
         
    }
    vector<int>v;
    for(auto p: m){
        for(auto q: p.second){
            v.insert(v.end(),q.second.begin(),q.second.end());
        }
    }
    return v;
}
    
