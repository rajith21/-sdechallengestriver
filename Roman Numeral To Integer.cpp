int romanToInt(string s) {
    int ans=0,x,y=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='X'){
            x=10;
        }else  if(s[i]=='I'){
            x=1;
        }else if(s[i]=='V'){
            x=5;
        }else  if(s[i]=='L'){
            x=50;
        }else if(s[i]=='C'){
            x=100;
        }else if(s[i]=='D'){
            x=500;
        }else if(s[i]=='M'){
            x=1000;
        }
        if(y>x){
            ans-=x;
        }else ans+=x;
        
        y=x;
    }
    return ans;
}
