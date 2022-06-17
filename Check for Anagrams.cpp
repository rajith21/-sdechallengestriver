bool areAnagram(string &str1, string &str2){
    vector<int>v1(26,0);
    vector<int>v2(26,0);
    if(str1.size()!=str2.size()){
        return 0;
    }
    for(int i=0;i<str1.size();i++){
        v1[str1[i]-'a']++;
    }
    for(int i=0;i<str2.size();i++){
        v2[str2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(v1[i]!=v2[i]){
            return 0;
        }
    }
    return 1;
    // Write your code here.
}
