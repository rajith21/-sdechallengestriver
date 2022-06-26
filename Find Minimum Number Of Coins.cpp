int findMinimumCoins(int amount) 
{
	vector<int>v={1,2,5,10,20,50,100,500,1000};
	int t=8,ans=0;
	while(amount!=0){
		ans+=amount/v[t];
		amount = amount % v[t];
		t--;
	}
	return ans;
    // Write your code here
}
