class Solution {
public:
    void rec(vector<int>& n,vector<vector<int>>& ans,vector<int>& ds, unordered_set<int>& us){
        if(ds.size()==n.size()){
            ans.push_back(ds);
            return ;
        }
        for(int i=0;i<n.size();i++){
            if(us.find(n[i])!=us.end())continue;
            ds.push_back(n[i]);
            us.insert(n[i]);
            rec(n,ans,ds,us);
            ds.pop_back();
            us.erase(n[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>ds;
      unordered_set<int> us;
        rec(nums,v,ds,us);
        return v;
    }
};
