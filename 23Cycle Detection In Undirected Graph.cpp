#include<queue>
bool IScycle(int i, vector<int>& vis, vector<vector<int>>& am){
    queue<pair<int , int>>q;
    q.push({i,-1});
    vis[i]=1;
    while(!q.empty()){
        pair< int, int >temp=q.front();
        q.pop();
        for(int j=0;j<am[temp.first].size();j++){
             if(vis[am[temp.first][j]]==1){
                 if(am[temp.first][j]!=temp.second) return true;
             }else {
                vis[am[temp.first][j]]=1;
                q.push({am[temp.first][j],temp.first});
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
            if(IScycle(i,vis,am)){
                return "Yes";
            }
        }
    }
    return "No";
    
}
