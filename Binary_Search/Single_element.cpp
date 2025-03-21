#include<bits/stdc++.h>
using namespace std;
//Find element which occurs at single while others twice
class Solution {
    public:
        int singleNonDuplicate(vector<int>& nums) {
            int n=nums.size();
            if(n==1) return nums[0];
            if(nums[0]!=nums[1])return nums[0];
            if(nums[n-1]!=nums[n-2])return nums[n-1];
            int low=1,high=n-2;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){
                    return nums[mid];
                }
                  //we are in left and ans is in right
                if(((mid%2)==1 &&nums[mid]==nums[mid-1])||(mid%2==0&& nums[mid]==nums[mid+1])){
                    low=mid+1;
                }//we are right and ans is in left
                else{
                    high=mid-1;
                }
            }
            return -1;
        }
    };