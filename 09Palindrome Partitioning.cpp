class Solution {
public:
    bool ISpall(string s, int st, int en){
        int t=en;
        for(int i=st;i<=en;i++){
            if(s[i]!=s[t]){
                return 0;
            }
            t--;
        }
        return 1;
    }
    void rec(string s,vector<string>& ds, vector<vector<string>>& ans, int ind){
        if(ind== s.size()){
            ans.push_back(ds);
            return ;
        }
        for(int i=ind ;i<s.size();i++){
            if(ISpall(s,ind,i)){
                ds.push_back(s.substr(ind,i-ind+1));
                rec(s,ds,ans,i+1);
                ds.pop_back();
                
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> ds;
        vector<vector<string>>ans;
        rec(s,ds,ans,0);
        return ans;
    }
};
