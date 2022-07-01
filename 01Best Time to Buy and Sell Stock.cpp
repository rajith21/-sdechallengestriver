#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int buy=prices[0],sell=-1,ans=0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]<buy){
            buy=prices[i];
            sell=-1;
        }else{
            sell=prices[i];
        }
        if(sell!=-1) ans=max(ans,sell-buy);
    }
    return ans;
}
