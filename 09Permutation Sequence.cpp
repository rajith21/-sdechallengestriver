class Solution {
public:
    string getPermutation(int n, int k) {
       vector<int>v;
        int fa=1;
        for(int i=1;i<=n;i++){
            v.push_back(i);
            fa=fa*i;
        }
        k--;
        string ans="";
        fa=fa/n;
        while(1){
            ans+=to_string(v[k/fa]);
            v.erase(v.begin()+(k/fa));
            if(v.size()==0){
                break;
            }
            k=k%fa;
            fa=fa/v.size();
        }
        return ans;
    }
};
