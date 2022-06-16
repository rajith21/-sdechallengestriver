#include<bits/stdc++.h>
vector<int> stringMatch(string &str, string &pat) {
    int x=1,pa=0,ans=0;
    vector<int> v;
    
    for(int i=pat.size()-1;i>=0;i--){
        pa+=(pat[i]-'A')*x;
        ans+=(str[i]-'A')*x;
        x=x*10;
      
    }
    if(ans==pa){
        v.push_back(0);
    }
    int po=pow(10,pat.size()-1);
    for(int i=pat.size();i<str.size();i++){
        ans-= po*(str[i-pat.size()]-'A');
        ans=ans*10;
        ans+=(str[i]-'A');
        if(ans==pa){
            v.push_back(i-pat.size()+1);
        }
    }
    return v;
}
