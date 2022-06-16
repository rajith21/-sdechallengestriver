int atoi(string str) {
    int ans=0,x=10,k=0;
    for(int i=0;i<str.size();i++){
        if(str[i]<='9'&&str[i]>='0'){
            ans=ans*10+(str[i]-'0');
        }
           if(str[i]=='-'&&i==0){
               k=1;
           }
           }
        
    
           if(k){
               return -ans;
                }
           else return ans;
           
}
