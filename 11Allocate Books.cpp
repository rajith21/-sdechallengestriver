int Solution::books(vector<int> &A, int B) {
 if(A.size()<B){
     return -1;
 }
int n=A.size();
 int l=INT_MAX,h=0,ma=INT_MAX;
 for(int i=0;i<n;i++){
     h+=A[i];
    l=min(l,A[i]);
 }
 while(l<=h){
     int m=(l+h)/2;
     int ans=0,sa=0,cnt=0;
    for(int i=0;i<n;i++){
         if (sa+ A[i] > m) {
               cnt++;
               sa = A[i];
      if (sa>m) {
          cnt=B;
          break;

      }
    } else {
      sa += A[i];
    }
       
    }
     if (cnt < B) {
        h=m-1;
     }else l=m+1;

  
 }
 return l;
}

