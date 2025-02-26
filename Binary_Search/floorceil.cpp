#include<bits/stdc++.h>
using namespace std;

 /* Search INSERT Position and  CEIL=Lower bound code
    FLOOR: Largest number in array<=x
    CEIL:Smallest number in array>=x i.e Lower bound
     change ans=nums[mid];
 */

 class Solution {
    public:
        int FLOOR(vector<int>& nums, int target) {
          int n=nums.size();
          int low=0;
          int high=n-1;
          int ans=-1;
          while(low<=high){
            int mid=low+((high-low)/2);
           if(nums[mid]<=target){
            ans=nums[mid];
            low=mid+1;
           }else
            high=mid-1;                              
          }  
          return ans;
        }
    };


