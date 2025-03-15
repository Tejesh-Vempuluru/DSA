#include<bits/stdc++.h>
using namespace std;
//lower bound:smallest index such that arr[ind]>=target
class Solution {
    public:
        int lower_bnd(vector<int>& nums, int target) {
             //STL for lowerbound
         int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
         //code
          int n=nums.size();
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
    };

    