#include<bits/stdc++.h>
using namespace std;
bool Isok(vector<int>& v , int sh,int co, int x){
    int st=v[0],c=1;
    for(int i=1;i<sh;i++){
        if(v[i]-st>=x){
            c++;
            st=v[i];
        }
    }
    if(c>=co){
        return true;
    }else return false;
}
void solve(){
    int sh,co;
    cin>>sh>>co;
    vector<int>v(sh);
    for(int i=0;i<sh;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    int low=v[0],high=v[sh-1];
    while(low<=high){
        int mid=(low+high)/2;
        if(Isok(v,sh,co,mid)){
            low=mid+1;
        }else {
            high=mid-1;
        }
        //cout<<low<<" "<<high<<endl;
    }
    cout<< high;
}

int main() {

   int t = 1;
   cin >> t;
   while(t--){
        solve();
        cout<<endl;
   }
   return 0;
}
