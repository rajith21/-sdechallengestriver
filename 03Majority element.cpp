#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	 int x=-1;
    int c=1,k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=x){
            c--;
            if(c==0){
                x=arr[i];
                c=1;
            }
        }else {
            c++;
            
            if(c>=2){
                k=1;
            }
            
        }
    }
    if(x!=-1){
        int co=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            co++;
        }
    }
    if(co>(n/2)){
        return x;
    }else return -1;
    }else return -1;
}
