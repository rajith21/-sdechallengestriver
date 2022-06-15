#include<stack>
string reverseString(string str)
{  
    string ans="";
   // cout<<ans<<endl;
    stack<char>s;
    if(str.size()==0){
        return "null";
    }
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]==' '){
              while(!s.empty()){
                  ans+=s.top();
                  s.pop();
              }
            while(str[i]==' '){
                i--;
            }
             i++;
            if(ans.size()!=0){
           
            ans+=' ';
            }
        }else {
            s.push(str[i]);
        }
    }
    while(!s.empty()){
                  ans+=s.top();
                  s.pop();
    }
    return ans;
}
