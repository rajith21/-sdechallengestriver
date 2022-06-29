vector<int> Solution::dNums(vector<int> &A, int B) {
    vector<int>v;
    if(B>A.size()){
        return v;
    }
    unordered_map<int,int>m;
    for(int i=0;i<B;i++){
        if(m.find(A[i])!=m.end()){
            m[A[i]]++;
        }else m[A[i]]=1;
    }
    v.push_back(m.size());
    for(int i=B;i<A.size();i++){
        m[A[i-B]]--;
        if(m[A[i-B]]==0){
            m.erase(A[i-B]);
        }
        if(m.find(A[i])!=m.end()){
            m[A[i]]++;
        }else m[A[i]]=1;
        v.push_back(m.size());
    }
    return v;
}
