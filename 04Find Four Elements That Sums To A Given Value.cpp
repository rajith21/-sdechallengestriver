#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-3;i++){
        for(int j=i+1;j<arr.size()-2;j++){
            int sum=arr[i]+arr[j];
            int l=j+1;
            int h=arr.size()-1;
            while(l<h){
                if(arr[l]+arr[h]+sum==target){
                    return "Yes";
                }else if(arr[l]+arr[h]+sum<target){
                    l++;
                }else h--;
            }
        }
    }
    return "No";
}
