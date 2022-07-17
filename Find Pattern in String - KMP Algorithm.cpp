bool findPattern(string p, string s)
{
   vector<int>v(p.size(),0);
    int j=0;
    v[0]=0;
    for(int i=1;i<p.size();i++){
        if(p[i]==p[j]){
            v[i]=j+1;
            j++;
        }else{
            if(j==0){
                v[i]=0;
            }else {
                j=v[j-1];
                i--;
            }
        }
    }
    
    j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==p[j]){
            j++;
            if(j==p.size()){
                return 1;
            }
        }else {
            if(j==0){
                continue;
            }else {
                i--;
                j=v[j-1];
            }
        }
    }
    return 0;
}
