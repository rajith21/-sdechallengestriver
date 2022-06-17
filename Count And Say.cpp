#include<bits/stdc++.h>
string writeAsYouSpeak(int n) 
{
    string ans="1";
    string ne="";
	for(int i=2;i<=n;i++){
    //    cout<<ans<<endl;
        ne="";
        for(int j=0;j<ans.size();j++){
            char x=ans[j];
            int c=0;
            while(j<ans.size()&&ans[j]==x){
                    j++;
                    c++;
                }
                j--;
                string ch=to_string(c);
                ne+=ch;
                ne+=x;
        }
        ans=ne;
    }
         return ans; 
}
