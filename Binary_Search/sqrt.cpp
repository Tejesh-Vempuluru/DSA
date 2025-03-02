#include<bits/stdc++.h>
using namespace std;

// Function to find square root
// x: element to find square root
class Solution {
    public:
      int floorSqrt(int n) {
          int low=1;
          int high=n;
          while(low<=high){
              long long mid=(low+high)/2;
              long long val=mid*mid;
              if(val<=n){
                  low=mid+1;
              }else{
                  high=mid-1;
              }
          }
          return high;
      }
  };