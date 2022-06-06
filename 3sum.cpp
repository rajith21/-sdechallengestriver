class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>v1;
        int si=nums.size();
        int a=0,b,c,l,h;
        sort(nums.begin(),nums.end());
        for(int i=0;a<si-2;i++){
          //  a=nums[i];
            l=a+1,h=si-1;
            while(l<h){
               
                if(nums[l]+nums[h]==-nums[a]){
                    v1.push_back(nums[a]);
                    b=nums[l];
                    c=nums[h];
                    v1.push_back(b);
                    v1.push_back(c);
                    v.push_back(v1);
                    v1.clear();
                    while(nums[l]==b){  
                        l++;
                        if(l>=h){
                            break;
                        }
                    }
                    while(nums[h]==c){
                        h--;
                        if(h<=l){
                            break;
                        }
                    }
                }else if(nums[l]+nums[h]<-nums[a]){
                    l++;
                }else {
                    h--;
                }
            }
            int temp=nums[a];
            while(temp==nums[a]){
                a++;
                if(a>=si){
                    break;
                }
            }
            
        }
        return v;
    }
};
