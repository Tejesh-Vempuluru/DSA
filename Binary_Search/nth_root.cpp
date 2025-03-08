/*You are given 2 numbers n and m, the task is to find n√m (nth root of m).
 If the root is not integer then returns -1.*/

 #include<bits/stdc++.h>
 using namespace std;

 class Solution {
    public:
    
      int fn(int mid,int n,int m){
          long long ans=1;
          for(int i=1;i<=n;i++){
              ans=ans*mid;
              if(ans>m) return 2;
          }
          if(ans==m)return 1;
          return 0;
      }
    
    
      int nthRoot(int n, int m) {
          // Code here.
          int low=1,high=m;
          while(low<=high){
              int mid=low+(high-low)/2;
              int midN=fn(mid,n,m);
              if(midN==1)
                  return mid;
              else if(midN==0)
                low=mid+1;
              else
                 high=mid-1;
          }
          return -1;
      }
  };