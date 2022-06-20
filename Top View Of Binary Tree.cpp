/************************************************************

    Following is the TreeNode class structure:

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
#include<bits/stdc++.h>
vector<int> getTopView(TreeNode<int> *root) {
    queue<pair<TreeNode<int>*,pair<int,int>>>q;
     vector<int>v;
    if(root==NULL){
        return v;
    }
    map<int , int >m;
    q.push({root,{0,0}});
    while(!q.empty()){
      
            pair<TreeNode<int>*,pair<int,int>> temp=q.front();
           TreeNode<int>* no=temp.first;
            int v=temp.second.first;
           if(m.find(v)==m.end()){
                m[v]=(no->val);
           }
            if(no->left!=NULL){
                q.push({no->left,{v-1,temp.second.second+1}});
            }
            if(no->right!=NULL){
                q.push({no->right,{v+1,temp.second.second+1}});
            }
            q.pop();
         
    }
   
    for(auto p: m){
        v.push_back(p.second);
    }
    return v;
}
