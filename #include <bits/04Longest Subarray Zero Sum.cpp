#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
    for(int i=1;i<arr.size();i++){
        arr[i]=arr[i]+arr[i-1];
    }
    unordered_map<int,int>m;
    int ans=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            ans=max(ans,i+1);
        }else if(m.find(arr[i])==m.end()){
            m[arr[i]]=i;
        }else {
            ans=max(ans,i-m[arr[i]]);
        }
    }
    return ans;
}
