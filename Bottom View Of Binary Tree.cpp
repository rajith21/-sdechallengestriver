/*************************************************************
 
    Following is the Binary Tree node structure.

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
#include<bits/stdc++.h>

vector<int> bottomView(BinaryTreeNode<int> * root){

    queue<pair<BinaryTreeNode<int>*,pair<int,int>>>q;
    map<int , int >m;
    q.push({root,{0,0}});
    while(!q.empty()){
      
            pair<BinaryTreeNode<int>*,pair<int,int>> temp=q.front();
            BinaryTreeNode<int>* no=temp.first;
            int v=temp.second.first;
           
            m[v]=(no->data);
            if(no->left!=NULL){
                q.push({no->left,{v-1,temp.second.second+1}});
            }
            if(no->right!=NULL){
                q.push({no->right,{v+1,temp.second.second+1}});
            }
            q.pop();
         
    }
    vector<int>v;
    for(auto p: m){
        v.push_back(p.second);
    }
    return v;
    
}
