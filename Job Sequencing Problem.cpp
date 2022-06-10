// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    bool static comparison(Job a, Job b) {
         return (a.profit > b.profit);
      }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr, arr + n, comparison);
     int ma= arr[0].dead;
      for (int i = 1; i < n; i++) {
         ma = max(ma, arr[i].dead);
      }
       int slot[ma+ 1];

      for (int i = 0; i <= ma; i++)
         slot[i] = -1;
         
         int jo=0,p=0;
         for(int i=0;i<n;i++){
             int x=arr[i].dead;
             while(slot[x]!=-1&&x!=0){
                 x--;
             }
             if(x!=0){
                 jo++;
                 slot[x]=arr[i].id;
                 p+=arr[i].profit;
             }
             
         }
         vector<int>v;
         v.push_back(jo);
         v.push_back(p);
         return v;
         
         
        // your code here
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends
