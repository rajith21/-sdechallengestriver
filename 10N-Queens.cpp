class Solution {
public:
    bool ISOk(int row , int col, vector<string> ds, int n){
        int dr=row,dc=col;
        while(row>=0&&col>=0){
            if(ds[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
            
        }
        row=dr,col=dc;
        while(col>=0){
            if(ds[row][col]=='Q'){
                return false;
            }
            col--;
        }
        col=dc;
        while(row<n&&col>=0){
            if(ds[row][col]=='Q'){
                return false;
            }
            row++;
            col--;
            
        }
        return true;
    }
    void  rec(vector<vector<string>>& ans, vector<string>& ds,int col, int n){
        if(col==n){
            ans.push_back(ds);
            return ;
        }
        for(int row=0;row<n;row++){
            if(ISOk(row,col,ds,n)){
                ds[row][col]='Q';
                rec(ans,ds,col+1,n);
                ds[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>ds(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            ds[i]=s;
        }
        vector<vector<string>>ans;
        rec(ans,ds,0,n);
        return ans;
        
    }
};
