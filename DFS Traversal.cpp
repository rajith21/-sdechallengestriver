#include<bits/stdc++.h>
void dfs(int k,vector<int>& vis, vector<vector<int>>&gr, vector<int>&df){
    if(gr[k].size()==0){
        df.push_back(k);
        return ;
    }
    df.push_back(k);
    vis[k]=1;
    for(int i=0;i<gr[k].size();i++){
        if(vis[gr[k][i]]==0){
                dfs( gr[k][i] , vis, gr, df);
         }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
  vector<vector<int>>gr(V);
    for(int i=0;i<E;i++){
        int x=edges[i][0];
        int y=edges[i][1]; 
         gr[x].push_back(y);
        gr[y].push_back(x);
    }
    vector<int>vis(V,0);
    vector<vector<int>>ans;
    for(int i=0;i<V;i++){
        vector<int>df;
        if(vis[i]==0){
            dfs(i,vis,gr,df);
        }
        if(df.size()!=0){
        ans.push_back(df);
        }
    }
    return ans;
}
