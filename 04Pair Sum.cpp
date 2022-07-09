#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
   int l=0,h=arr.size()-1;
    while(l<h){
        if(arr[l]+arr[h]==s){
            ans.push_back({arr[l],arr[h]});
            int t=l;
            l++;
            
            while(arr[l]+arr[h]==s&&l<h){
                ans.push_back({arr[l],arr[h]});
                l++;
            }
            l=t;
           int t1=h;
            h--;
            
            while(arr[l]+arr[h]==s&&l<h){
                ans.push_back({arr[l],arr[h]});
                h--;
            }
            t++;
            l=t;
            t1--;
            h=t1;
            
          // h--;
        }else if(arr[l]+arr[h]<s){
            l++;
        }else if(arr[l]+arr[h]>s){
            h--;
        }
    }
    return ans;
}
