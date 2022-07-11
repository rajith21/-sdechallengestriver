#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    
unordered_map<int,int>visited;
   
    int c=0,ans=0;
    unordered_map<int,int>m;
   
    for(int i=1;i<arr.size();i++){
        arr[i]=arr[i]^arr[i-1];
    }
    for(int i=0;i<arr.size();i++){
        int y=arr[i];
        if(arr[i]==x){
            ans++;
        }
        int k=x^y;
        if(m.find(k)!=m.end()){
            ans+=m[k];
        }
       m[y]++;
        
    }
    return ans;
}
