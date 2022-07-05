#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	for(int i=m;i<m+n;i++){
        arr1[i]=arr2[i-m];
    }
    int gap=ceil((m+n)/2.0);
    while(gap>0){
        int p1=0;
        int p2=gap;
        while(p2<m+n){
            if(arr1[p1]>arr1[p2]){
                int temp=arr1[p1];
                arr1[p1]=arr1[p2];
                arr1[p2]=temp;
            }
            p1++;
            p2++;
        }
        if(gap==1){
            break;
        }
        gap=ceil(gap/2.0);
    }
    return arr1;
}
