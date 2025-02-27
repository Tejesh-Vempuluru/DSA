#include<bits/stdc++.h>
using namespace std;
//Search element in Rotated Sorted array [duplicates]
//Edge case [3,1,2,3,3,3,3]
//           low   mid   high      low=mid=high
class Solution {
    public:
        bool search(vector<int>& nums, int target) {
            int low=0,high=nums.size()-1;
               while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target) return true;
                 if(nums[low]==nums[mid]&&nums[mid]==nums[high]){
                    low++,high--;
                    continue;
                 }
                 if(nums[low]<=nums[mid]){
                    //left side sorted
                    if(nums[low]<=target&&nums[mid]>=target)
                        high=mid-1;
                    else
                     low=mid+1;
                }else{
                    //right side sorted
                      if(nums[mid]<=target&&nums[high]>=target)
                        low=mid+1;
                    else
                     high=mid-1;
                }
        
               }
               return false;
        }
    };