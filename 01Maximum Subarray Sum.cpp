#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    int p1=0;
    long long sum=0,ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        ans=max(ans,sum);
    }
    return ans;
}
