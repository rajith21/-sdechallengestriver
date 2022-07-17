// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector<int>z(pat.size()+txt.size()+1);
            vector<int>ans;
            int raj=pat.size();
            pat+='!';
            pat+=txt;
            z[0]=0;
            int l=0,r=0,k1=0;
            for(int k=1;k<pat.size();k++){
                if(k>r){
                    r=k;
                    l=k;
                    while(r<pat.size()&&pat[r]==pat[r-l]){
                        r++;
                    }
                    z[k]=r-l;
                    r--;
                }else {
                    k1=k-l;
                    if(z[k1]+k<r+1){
                        z[k]=z[k1];
                    }else {
                        l=k;
                         while(r<pat.size()&&pat[r]==pat[r-l]){
                        r++;
                    }
                    z[k]=r-l;
                    r--;
                        
                    }
                }
            }
            for(int i=1;i<pat.size();i++){
                if(z[i]==raj){
                    ans.push_back(i-raj);
                }
            }
            return ans;
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if(res.size()==0)
            cout<<"-1 ";
        else
            for (int i : res)
                cout << i << " ";
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends
