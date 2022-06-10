// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
   
    int maxMeetings(int start[], int end[], int n)
    {
        
        vector<vector<int>>v(n);
        for(int i=0;i<n;i++){
            v[i].push_back(end[i]);
            v[i].push_back(start[i]);
            
        }
        sort(v.begin(),v.end());
        int t=0,c=1;
        
        for(int i=1;i<n;i++){
            if(v[i][1]>v[t][0]){
                t=i;
                c++;
            }
        }
        return c;
        
        
        
        
        
        
        
        
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
