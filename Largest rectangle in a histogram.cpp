#include<stack>
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
int largestRectangle(vector < int > & heights) {
     int wid,ans=0,ma,n = heights.size();
     vector<int> lef(n);
     vector<int> rig(n);
     right(rig,heights);
     left(lef,heights);
      for(int i=0; i < heights.size()   ;i++){
            wid= -lef[i]+rig[i]-1;
        //  cout<<wid<<endl;
          ma=wid*heights[i];
          ans=max(ma,ans);
      }
    return ans;
}
 
