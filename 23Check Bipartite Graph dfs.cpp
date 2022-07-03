bool DFSDE(int j , vector<int>& vis, vector<vector<int>>& am){
    
        for(int i=0;i<am[j].size();i++){
                if(vis[am[j][i]]==-1){
                    vis[am[j][i]]=vis[j]^1;
                    if(DFSDE(am[j][i],vis, am)==false){
                        return false;
                    }
                }else if(vis[am[j][i]]==vis[j]){
                    return false;
                }
        }
    return true;
}
bool isGraphBirpatite(vector<vector<int>> &edges) {
	vector<int>vis(edges.size(),-1);
    vector<vector<int>>am (edges.size());
    for(int i=0;i<edges.size();i++){
        for(int j=0;j<edges.size();j++){
            if(edges[i][j]==1){
                am[i].push_back(j);
                am[j].push_back(i);
            }
        }
    }
   
    for(int i=0;i<edges.size();i++){
        if(vis[i]==-1){
            vis[i]=0;
            if(DFSDE(i,vis ,am )==false){
                return false;
            }
        }
    }
    return true;
}
