#include<bits/stdc++.h>
using namespace std;
//Search element in Rotated Sorted array
class Solution {
    public:
        int search(vector<int>& nums, int target) {
           int low=0,high=nums.size()-1;
           while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) {return mid;
            }else if(nums[low]<=nums[mid]){
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
           return -1;
        }
    };