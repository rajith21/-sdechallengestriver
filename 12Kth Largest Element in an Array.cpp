class Solution {
public:
    void delet(vector<int>& v,int n){
        
        int x=v[0];
        v[0]= v[n-1];
        v[n-1]=x;
        n--;
        int i=0,j=1;
        while(j<n){
          
            if(j==n-1){
                if(v[j]>v[i]){
                    int t=v[i];
                    v[i]=v[j];
                    v[j]=t;
                }
                break;
            }
            if(max(v[j+1],v[j])>v[i]){
                if(v[j+1]>=v[j]){
                    int t=v[i];
                    v[i]=v[j+1];
                    v[j+1]=t;
                    i=j+1;
                }else {
                    int t=v[i];
                    v[i]=v[j];
                    v[j]=t;
                    i=j;
                }
            }else {
                break;
            }
            j=(2*i)+1 ;
        }
       
    }
    void Insert(vector<int>& v, int n){
        int i=n;
        while(i>0&&v[i]>v[i/2]){
            int t=v[i];
            v[i]=v[i/2];
            v[i/2]=t;
            i=i/2;
        }
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        for(int i=1;i<nums.size();i++){
            Insert(nums,i);
        }
        
        for(int i=0;i<k-1;i++){
            delet(nums,nums.size()-i);
           
        }
      
        return nums[0];
    }
};
