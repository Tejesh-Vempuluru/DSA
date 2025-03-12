#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    
     int lower_bnd(vector<int>& nums,int n, int target) {
           //code
            int low=0;
            int high=n-1;
            int ans=n;
            while(low<=high){
              int mid=low+((high-low)/2);
             if(nums[mid]>=target){
              ans=mid;
              high=mid-1;
             }else{
              low=mid+1;
             }
              
            }  
  
            return ans;
          }
      int rowWithMax1s(vector<vector<int>> &arr) {
          // code here
          int n=arr.size();
          int m=arr[0].size();
          int cnt_max=0;
          int ind=-1;
          for(int i=0;i<n;i++){
              int cnt_ones=m-lower_bnd(arr[i],m,1);
              if(cnt_ones>cnt_max){
                  cnt_max=cnt_ones;
                  ind=i;
                  }
          }
          return ind;
          
      }
  };
  