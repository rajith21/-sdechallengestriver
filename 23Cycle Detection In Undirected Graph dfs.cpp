
bool IScycle(int i,int p, vector<int>& vis, vector<vector<int>>& am){
    for(int j=0;j<am[i].size();j++){
        if(vis[am[i][j]]==1&&am[i][j]!=p){
            return true;
        }
       
        if(vis[am[i][j]]==0){
             vis[am[i][j]]=1;
            if(IScycle(am[i][j],i,vis,am)){
                return true;
            }
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    vector<int>vis(n+1,0);
    vector<vector<int>>am(n+1);
    for(int i=0;i<m;i++){
        am[edges[i][0]].push_back(edges[i][1]);
        am[edges[i][1]].push_back(edges[i][0]);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            vis[i]=1;
            if(IScycle(i,-1,vis,am)){
                return "Yes";
            }
        }
    }
    return "No";
    
}
