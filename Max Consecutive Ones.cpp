class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int s=nums.size(),c=0,ans=0;
        for(int i=0;i<s;i++){
            if(nums[i]==1){
                c++;
            }else {
                ans=max(ans,c);
                c=0;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};
