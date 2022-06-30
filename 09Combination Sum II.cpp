class Solution {
public:
    void rec ( vector<int>& ca,int tar, vector<int>& ds,vector<vector<int>>& ans,int ind){
        if(tar==0){
            ans.push_back(ds);
            return ;
        }
       
        for(int i=ind; i<ca.size();i++){
            if(i>ind&&ca[i]==ca[i-1]) continue;
                if (ca[i] > tar) break;
                    ds.push_back(ca[i]);
                    rec(ca,tar-ca[i],ds,ans,i+1);
                    ds.pop_back();
                  //  rec(ca,tar,ds,ans,ind+1);
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        rec(candidates,target,ds,ans,0);
        return ans;
    }
};
