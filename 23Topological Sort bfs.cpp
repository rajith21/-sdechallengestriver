#include<bits/stdc++.h>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    vector<int>vis(v,0);
    vector<vector<int>>am (v);
    vector<int>indeg(v,0);
    for(int i=0;i<edges.size();i++){
        am[edges[i][0]].push_back(edges[i][1]);
        indeg[edges[i][1]]++;
    }
    vector<int>ve;
    queue<int>q;
    for(int i=0;i<v;i++){
        if(indeg[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int x=q.front();
        ve.push_back(x);
        q.pop();
        for(int i=0;i<am[x].size();i++){
            indeg[am[x][i]]--;
            if(indeg[am[x][i]]==0){
                q.push(am[x][i]);
            }
        }
    }
    return ve;
}
