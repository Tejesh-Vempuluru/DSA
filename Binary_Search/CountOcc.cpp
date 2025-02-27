#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    
    pair<int,int> searchRange(vector<int>& nums, int target) {
              int n=nums.size();
            int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            int up=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
            if(lb==n||nums[lb]!=target) return{-1,-1};
            return {lb,up-1}; 
    }
    
      int countFreq(vector<int>& arr, int target) {
          // code here
          pair<int,int>ans=searchRange(arr,target);
          if(ans.first==-1)return 0;
          return ans.second-ans.first+1;
      }
  };