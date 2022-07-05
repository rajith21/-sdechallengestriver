#include <bits/stdc++.h> 
bool isKset(int n , int k){
    if(n&(1<<(k-1))){
        return 1;
    }else return 0;
}
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int xo=0;
	for(int i=1;i<=n;i++){
        xo=xo^i;
        xo=xo^arr[i-1];
    }
    int k=1;
	while(xo%2==0){
        xo=xo>>1;
        k++;
    }
    int xo1=0,xo2=0;
    for(int i=1;i<=n;i++){
        if(isKset(arr[i-1],k))xo1=xo1^arr[i-1];
        else xo2=xo2^arr[i-1];
        
        if(isKset(i,k))xo1=xo1^i;
        else xo2=xo2^i;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==xo1){
            pair<int,int>p;
            p.first=xo2;
            p.second=xo1;
            return p;
        }
         if(arr[i]==xo2){
            pair<int,int>p;
            p.first=xo1;
            p.second=xo2;
            return p;
        }
    }
}
