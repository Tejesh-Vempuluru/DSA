#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int Upper_bnd(vector<int>& nums,int n, int target) {
            int low=0;
            int high=n-1;
            int ans=n;
            while(low<=high){
              int mid=low+((high-low)/2);
             if(nums[mid]>target){
              ans=mid;
              high=mid-1;
             }else{
              low=mid+1;
             }
              
            }  
  
            return ans;
          }
    
    int countsmallequal(vector<vector<int>> &mat,int n,int m,int x){
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=Upper_bnd(mat[i],m,x);
        }
        return cnt;
    }
      int median(vector<vector<int>> &mat) {
          // code here
          int low=INT_MAX;int high=INT_MIN;
          int n=mat.size();
          int m=mat[0].size();
          for(int i=0;i<n;i++){
              low=min(low,mat[i][0]);
              high=max(high,mat[i][m-1]);
          }
          int req=(n*m)/2;
          while(low<=high){
              int mid=(low+high)/2;
              int s=countsmallequal(mat,n,m,mid);
              if(s<=req)low=mid+1;
              else high=mid-1;
          }
          return low;
      }
  };
  

