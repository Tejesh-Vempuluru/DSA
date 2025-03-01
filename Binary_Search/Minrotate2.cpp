//Given a rotated sorted array find the minimum element with duplicates
//edge test cases [3,1,3],[10,1,10,10,10] error if we use Minrotate1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findMin(vector<int>& a) {
            int low = 0, high = a.size() - 1;
            int ans = INT_MAX;
    
            while (low <= high) {
                // If the array is already sorted, return the minimum element
                if (a[low] < a[high]) {
                    ans = min(ans, a[low]);
                    break;
                }
    
                int mid = (low + high) / 2;
                 ans = min(ans, a[mid]);
               
    
                // If duplicates exist at both ends, reduce the search space
               if (a[low] == a[mid] && a[mid] == a[high]) {
                   low++;
                   high--;
               }
               else 
                if (a[low] <= a[mid]) { 
                    // Left half is sorted
                    ans = min(ans, a[low]);
                    low = mid + 1;
                } else { 
                    // Right half is sorted
                    
                    high = mid - 1;
                    
                }
            }
            return ans;
        }
    };