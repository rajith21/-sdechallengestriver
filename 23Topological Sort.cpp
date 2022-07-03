#include<bits/stdc++.h>
void tsort(int k, vector<int>&vis, vector<vector<int>>&am,vector<int>&ve){
    vis[k]=1;
    for(int i=0;i<am[k].size();i++){
        if(vis[am[k][i]]==0){
            tsort(am[k][i],vis,am,ve);
        }
    }
    ve.push_back(k);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    vector<int>vis(v,0);
     vector<vector<int>>am (v);
    for(int i=0;i<edges.size();i++){
        am[edges[i][0]].push_back(edges[i][1]);
    }
    vector<int>ve;
    for(int i=0;i<v;i++){
        if(vis[i]==0){
           tsort(i,vis,am,ve);
        }
    }
    reverse(ve.begin(),ve.end());
    
    return ve;
}
