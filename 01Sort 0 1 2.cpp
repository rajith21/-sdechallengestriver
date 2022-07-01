#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int p0=0;
    int p2=n-1;
    for(int i=p0;p0<=p2&&i<=p2;i++)
    {
        if(arr[i]==2){
            arr[i]=arr[p2];
            arr[p2]=2;
            p2--;
            i--;
        }else if(arr[i]==0){
            arr[i]=arr[p0];
            arr[p0]=0;
            p0++;
        }
        
    }
}
