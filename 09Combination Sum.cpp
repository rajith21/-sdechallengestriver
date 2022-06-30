class Solution {
public:
    void rec(vector<int>& ca,int tar,int ind, vector<int>& ds, vector<vector<int>>& ans){
        if(tar==0){
            ans.push_back(ds);
            return ;
        }
        if(ind==ca.size()){
            return ;
        }
        if(tar<ca[ind]){
            return ;
        }
    
            ds.push_back(ca[ind]);
            rec(ca,tar-ca[ind],ind,ds,ans);
            ds.pop_back();
            rec(ca,tar,ind+1,ds,ans);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        rec(candidates,target,0,ds,ans);
        return ans;
    }
};
