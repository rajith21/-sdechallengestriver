class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s=nums.size();
        int i=0,j=1;
        while(j!=s){
            if(nums[j]!=nums[i]){
               // cout<<"HII";
                nums[i+1]=nums[j];
                j++;
                i++;
            }else j++;
        }
        
        return i+1;
    }
};
