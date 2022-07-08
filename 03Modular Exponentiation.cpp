#include <bits/stdc++.h> 
int pow(long long int x, int y, int m){
    x=x%m;
    if(x==0){
        return 0;
    }
    long long int ans=1;
    while(y>0){
        if(y&1){
            ans=(ans*x)%m;
        }
        y=y>>1;
        x=(x*x)%m;
    }
    return ans;
}
int modularExponentiation(int x, int n, int m) {
	return  pow(x,n,m);
}
