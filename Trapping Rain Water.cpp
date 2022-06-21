class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size());
        vector<int>right(height.size());
        left[0]=height[0];
        int c=0;
        right[height.size()-1]=height[height.size()-1];
        for(int i=1;i<height.size();i++){
            left[i]=max(left[i-1],height[i]);
            right[height.size()-i-1]=max(right[height.size()-i],height[height.size()-i-1]);
        }
        for(int i=0;i<height.size();i++){
            c+=(min(left[i],right[i])-height[i]);
        }
        return c;
    }
};
