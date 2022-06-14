#include<queue>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
      queue<pair<int,int>>q;
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                q.push({i,j});
            }
        }
    }
    while(q.size()){
    int x=q.size();
    for(int i=0;i<x;i++){
         pair<int, int> y=q.front();
        int a=y.first,b=y.second;
        q.pop();
        
        if(a>0&&grid[a-1][b]==1){
            grid[a-1][b]=2;
            q.push({a-1,b});
        }
        
       if((a<n-1)&&grid[a+1][b]==1){
                grid[a+1][b]=2;
                q.push({a+1,b});
       }
        if((b>0)&&grid[a][b-1]==1){
                grid[a][b-1]=2;
                q.push({a,b-1});
       }
        if((b<m-1)&&grid[a][b+1]==1){
                grid[a][b+1]=2;
                q.push({a,b+1});
       }
    }
        if(q.size())
             c++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
               return -1;
            }
        }
    }
    return c;
}
