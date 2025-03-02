//How many times the array is rotated
//It is the index of min element

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int findKRotation(vector<int> &a) {
           int low=0;
         int high=a.size()-1;
         int ans=INT_MAX;
         int index=-1;
         while(low<=high){
         
          if(a[low]<=a[high])
          {   if(a[low]<ans)
              {
                  ans=a[low];
                  index=low;
              }
              break;
          }
           int mid=(low+high)/2;
           if(a[low]<=a[mid]){
             if(a[low]<ans)
              {
                  ans=a[low];
                  index=low;
              }
              low=mid+1;
           }
           else
           {
               if(a[mid]<ans)
              {
                  ans=a[mid];
                  index=mid;
              }
              high=mid-1;
           }
         } 
         return index;
      }
  };
  
  