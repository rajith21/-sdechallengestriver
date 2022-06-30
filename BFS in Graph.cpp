
#include<bits/stdc++.h>
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    int V=vertex;
    vector<vector<int>>gr(V);
    int E=edges.size();
    for(int i=0;i<E;i++){
        int x=edges[i].first;
        int y=edges[i].second; 
         gr[x].push_back(y);
        gr[y].push_back(x);
    }
    for(int i=0;i<V;i++){
        sort(gr[i].begin(),gr[i].end());
    }
    vector<int>vis(V,0);
    queue<int>q;
    vector<int>ans;
    for(int i=0;i<V;i++){
        if(vis[i]==0){
            q.push(i);
            ans.push_back(i);
            vis[i]=1;
            while(!q.empty()){ 
                int x=q.front();
                q.pop();
                for(int j=0;j<gr[x].size();j++){
                     if(vis[gr[x][j]]==0){
                         q.push(gr[x][j]);
                          ans.push_back(gr[x][j]);
                         vis[gr[x][j]]=1;
                     }
                }
            }
        }
    }
    return ans;

}
