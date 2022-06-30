class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size();
         
        while(1){
              int m=(low+high)/2;
            if(m%2==0){
                if(m!=0&&nums[m]==nums[m-1]){
                    high=m-1;
                }else if(m<nums.size()-1&&nums[m]==nums[m+1]){
                    low=m+1;
                }else return nums[m];
            }else {
                if(m!=0&&nums[m]==nums[m-1]){
                    low=m+1;
                }else if(m<nums.size()-1&&nums[m]==nums[m+1]){
                    high=m-1;
                }else return nums[m];
            }
        }
    }
};
