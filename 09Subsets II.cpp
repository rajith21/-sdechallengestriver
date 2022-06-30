class Solution {
public:
    void rec(vector<int>& n, vector<vector<int>>& ans,vector<int>& ds,int ind,int s){
        ans.push_back(ds);
      
        for(int i=ind;i<s;i++){
            if(i!=ind&&n[i]==n[i-1]) continue;
            ds.push_back(n[i]);
            rec(n,ans,ds,i+1,s);
            ds.pop_back();
        
    }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>v1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        rec(nums,v,v1,0,n);
        return v;
    }
};
