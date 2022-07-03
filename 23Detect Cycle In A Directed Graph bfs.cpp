#include<queue>
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    
    vector<vector<int>>am (n+1);
    vector<int>indeg(n+1,0);
    for(int i=0;i<edges.size();i++){
        am[edges[i].first].push_back(edges[i].second);
        indeg[edges[i].second]++;
    }
    
    queue<int>q;
    int c=0;
    for(int i=1;i<=n;i++){
        if(indeg[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int x=q.front();
       c++;
        q.pop();
        for(int i=0;i<am[x].size();i++){
            indeg[am[x][i]]--;
            if(indeg[am[x][i]]==0){
                q.push(am[x][i]);
            }
        }
    }
    if(c==n){
        return 0;
    }else return 1;
    
   
}
