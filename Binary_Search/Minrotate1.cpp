//Given a rotated sorted array find the minimum element without duplicates
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findMin(vector<int>& a) {
           int low=0;
           int high=a.size()-1;
           int ans=INT_MAX;
           while(low<=high){
           
            if(a[low]<=a[high])
            {
                ans=min(ans,a[low]);
                break;
            }
             int mid=(low+high)/2;
             if(a[low]<=a[mid]){
                ans=min(ans,a[low]);
                low=mid+1;
             }
             else
             {
                ans=min(ans,a[mid]);
                high=mid-1;
             }
           } 
           return ans;
        }
    };

