vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());
    vector<int>ans;
    set<pair<int,int> >s;
    s.insert({0,0});
    priority_queue<pair<int,pair<int,int>>>p;
    p.push({A[0]+B[0],{0,0}});
    while(C){
        C--;
        
        pair<int,pair<int,int>> x=p.top();
        int a=x.second.first,b=x.second.second;
        p.pop();
        ans.push_back(x.first);
        if(a+1<A.size() && s.find({a+1,b})==s.end()){
            s.insert({a+1,b});
            p.push({A[a+1]+B[b],{a+1,b}});
        }
        if(b+1<A.size() && s.find({a,b+1})==s.end()){
            s.insert({a,b+1});
            p.push({A[a]+B[b+1],{a,b+1}});
        }
    }
    return ans;
    
}
