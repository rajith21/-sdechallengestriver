// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void rec(vector<int> & a, vector<int>& v, int N, int i,int sum){
         if(i==N){
             v.push_back(sum);
             return ;
         }
          rec(a,v,N,i+1,sum+a[i]);
          rec(a,v,N,i+1,sum);
          
          
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>v;
        rec(arr,v,N,0,0);
        return v;
        // Write Your Code here
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
