bool detdfs(int k , vector<int>&vis, vector<int>&dfsvis, vector<vector<int>>& am){
  
    vis[k]=1;
    dfsvis[k]=1;
    
    for(int i=0;i<am[k].size();i++){
        if(vis[am[k][i]]==0){
           if( detdfs(am[k][i],vis,dfsvis,am)==true){
               return true;
           } 
        }else if(dfsvis[am[k][i]]==1){
                return true;
         }
    }
    dfsvis[k]=0;
    
    return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    vector<int>vis(n+1,0);
    vector<int>dfsvis(n+1,0);
    vector<vector<int>>am (n+1);
    for(int i=0;i<edges.size();i++){
        am[edges[i].first].push_back(edges[i].second);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
           if( detdfs(i,vis,dfsvis,am)==true){
               return 1;
           }
        }
    }
    return 0;
   
}
