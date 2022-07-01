#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int k=0;
    for(int i=n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]){
            k=1;
            int ma=i+1;
            for(int j=i+2;j<n;j++){
                if(permutation[j]>permutation[i]&&permutation[j]<permutation[ma]){
                    ma=j;
                }
                
            }
            
            int temp=permutation[i];
            permutation[i]=permutation[ma];
            permutation[ma]=temp;
            sort(permutation.begin()+i+1,permutation.end());
            break;
        }
    }
    if(k==0){
        sort(permutation.begin(),permutation.end());
    }
    return permutation;
}
