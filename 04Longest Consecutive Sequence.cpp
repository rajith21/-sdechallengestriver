#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    int c=1;
    int ans=1;
    sort(arr.begin(),arr.end());
    
    for(int i=1;i<n;i++){
        while(arr[i]==arr[i-1]){
            i++;
        }
        if(arr[i]==arr[i-1]+1){
            c++;
            ans=max(ans,c);
        }else {
            c=1;
        }
    }
    return ans;
}
