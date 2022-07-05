#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	map<int,int>m;
    for(int i=0;i<n;i++){
        if(m.find(arr[i])!=m.end()){
            return arr[i];
        }
        m[arr[i]]=1;
    }
}
