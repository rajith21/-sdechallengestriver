#include<deque>
void fima(int i,int k, vector<int> & nums, vector<int> & ans, deque<int> & dq){
    while((!dq.empty())&&dq.front()<=i-k) {
        dq.pop_front();
    }
    
    if(dq.empty()){
            dq.push_back(i);
     }else {
            while((!dq.empty())&&nums[dq.back()]<=nums[i]){
                dq.pop_back();
                
            }
            dq.push_back(i);
            
        }
    
    ans.push_back(nums[dq.front()]);
}
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    vector<int> ans;
    deque<int> dq;
    for(int i =0;i<k;i++){
        if(dq.empty()){
            dq.push_back(i);
        }else {
            while((!dq.empty())&&nums[dq.back()]<=nums[i]){
                dq.pop_back();
                
            }
            dq.push_back(i);
            
        }
    }
    ans.push_back(nums[dq.front()]);
    for(int i=k;i<nums.size();i++){
        fima(i,k,nums, ans, dq);
            
    }
    return ans;
}
