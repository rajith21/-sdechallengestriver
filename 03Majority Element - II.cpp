#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    int c1=1,c2=1,x=arr[0],y;
    int i=1;
    while(arr[i]==arr[0]){
        i++;
        c1++;
    }
    y=arr[i];
    
    for(i;i<arr.size();i++){
        if(arr[i]==x){
            c1++;
        }else if(arr[i]==y){
            c2++;
        }else {
            c1--;
            c2--;
           if(c1==0){
                x=arr[i];
                c1=1;
            }else if(c2==0){
                y=arr[i];
                c2=1;
            }
        }
    }
    int cx=0,cy=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x){
            cx++;
        }
        if(arr[i]==y){
            cy++;
        }
    }
    vector<int>ans;
    if(cx>(arr.size()/3)){
        ans.push_back(x);
    }
    if(cy>(arr.size()/3)){
        ans.push_back(y);
    }
    return ans;

}
