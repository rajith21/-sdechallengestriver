#include<queue> 
void bfs(int k,vector<int>&vis, vector<vector<int>>& am){
        queue<int>q;
        q.push(k);
       
        while(!q.empty()){
            int t=q.front();
            vis[t]=1;
            q.pop();
            for(int i=0;i<am[t].size();i++){
                if(vis[am[t][i]]==0){
                    q.push(am[t][i]);
                }
            }
        }
    }
int getTotalIslands(int** arr, int n, int m)
{
    int ro=n;
        int co=m;
    int c=0;
        vector<vector<int>>v(ro*co);
        int k=0;
        for(int i=0;i<ro;i++){
            for(int j=0;j<co;j++){
                
                  if(arr[i][j]==1){
                      int x=0;
                     
                      if(j>0){
                          if(arr[i][j-1]==1){
                               x=1;
                              v[k-1].push_back(k);
                          }
                      }
                      if(j<co-1){
                          if(arr[i][j+1]==1){
                               x=1;
                              v[k+1].push_back(k);
                          }
                      }
                      if(i>0){
                          if(arr[i-1][j]==1){
                               x=1;
                              v[k-co].push_back(k);
                          }
                      }
                      if(i<ro-1){
                          if(arr[i+1][j]==1){
                               x=1;
                              v[k+co].push_back(k);
                          }
                      }
                      if(i>0&&j>0&&arr[i-1][j-1]==1){
                           x=1;
                          v[k-co-1].push_back(k);
                      }
                       if(i>0&&j<co-1&&arr[i-1][j+1]==1){
                            x=1;
                          v[k-co+1].push_back(k);
                      }
                       if(i<ro-1&&j<co-1&&arr[i+1][j+1]==1){
                            x=1;
                          v[k+co+1].push_back(k);
                      }
                       if(i<ro-1&&j>0&&arr[i+1][j-1]==1){
                            x=1;
                          v[k+co-1].push_back(k);
                      }
                      if(x==0){
                          c++;
                      }
                  }
                k++;
            }
        }
       
        vector<int>vis(k,0);
        
        for(int i=0;i<k;i++){
            if(v[i].size()!=0&&vis[i]==0){
                bfs(i,vis,v);
                c++;
            }
        }
        return c;
        
}
