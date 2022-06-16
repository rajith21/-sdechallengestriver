string longestCommonPrefix(vector<string> &arr, int n)
{
    char ch;
    string ans="";
    for(int i=0;i<arr[0].size();i++){
        ch = arr[0][i];
        for(int j=1;j<n;j++){
            if(arr[j].size()>=i&&arr[j][i]==ch){
                
            }else {
                return ans;
            }
        }
        ans+=ch;
    }
    return ans;
}


