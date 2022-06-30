class Solution {
    int bs(vector<int>& nums,int l,int h, int x){
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]<x){
                l=m+1;
            }else if(nums[m]>x){
                h=m-1;
            }else if(nums[m]==x){
                return m;
            }
        }
        return -1;
    }
        public:
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]>=nums[l]){
                if(target<=nums[m]&&target>=nums[l]){
                    return bs(nums,l,m,target);
                }else {
                    l=m+1;
                }
            }else {
                if(target>=nums[m]&&target<=nums[h]){
                    return bs(nums,m,h,target);
                }else {
                    h=m-1;
                }
            }
        }
        return -1;
    }
};
