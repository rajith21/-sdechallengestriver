// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
static bool comp(pair<int,int> & a, pair<int,int>& b){
    if(a.first<b.first){
        return true;
    }else if(a.first==b.first){
        return a.second>b.second;
    }else return false;
}
void right(vector < int > & rig,vector < int > & heights){
    stack < int > s;
    for(int i = heights.size() - 1; i >= 0; i--){
        if(s.empty()){
            rig[i]=i+1;
            s.push(i);
        }else {
            while((!s.empty())&&heights[s.top()] >= heights[i]){
                s.pop();
            }
             if(s.empty()){
                rig[i]=heights.size();
                s.push(i);
            }else {
                rig[i]=s.top();
                 s.push(i);
             }
        }
    }
   
}
void left(vector < int > & lef, vector <int > & heights){
    stack <int> s;
    for(int i=0;i<heights.size();i++){
        if(s.empty()){
            lef[i]=i-1;
            s.push(i);
        }else {
             while((!s.empty())&&heights[s.top()] >= heights[i]){
                s.pop();
            }
             if(s.empty()){
                lef[i]=-1;
                s.push(i);
            }else {
                lef[i]=s.top();
                 s.push(i);
             }
            
        }
    }
} 
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        vector<int> a(n);
        for(int i=0;i<n;i++){
            a[i]=arr[i];
        }
        vector<int> lef(n);
    vector<int> rig(n);
    vector<int> ans(n,-1000000001);
    left(lef,a);
    right(rig,a);
    vector<pair<int,int>> wid;
    for(int i=0;i<n;i++){
        wid.push_back({-lef[i]+rig[i]-1,a[i]});
       
    }
   sort(wid.begin(),wid.end(),comp);
    for(int i=0;i<n;i++){
        ans[wid[i].first-1]=wid[i].second;
        int x=wid[i].first;
        while(i<n&&x==wid[i].first){
            i++;
        }
        i--;
    }
    for(int i=n-2;i>=0;i--){
        ans[i]=max(ans[i],ans[i+1]);
        
    }
    return ans;
    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        vector <int> res = ob.maxOfMin(a, n);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
