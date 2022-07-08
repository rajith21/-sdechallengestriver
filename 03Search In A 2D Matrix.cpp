#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) { 
    int r=0,c=n-1;
    while(1){
        if(mat[r][c]<target){
            if(r<m-1){
                r++;
            }else return 0;
        }else if(mat[r][c]>target){
            if(c>0){
                c--;
            }else return 0;
        }else return 1;
    }
}
