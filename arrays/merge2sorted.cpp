#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int left=m-1;
            int right=0;
            while(left>=0&&right<n){
                if(nums1[left]>nums2[right]){
                    swap(nums1[left],nums2[right]);
                        left--;
                        right++;
                    }else{
                        break;
                    }
                }
               // Sort nums1 and nums2 after swapping
            sort(nums1.begin(), nums1.begin() + m);
            sort(nums2.begin(), nums2.end());
    
            // Copy nums2 elements into nums1's empty space
            for (int i = 0; i < n; i++) {
                nums1[m + i] = nums2[i];
    
            }
        }
        
    };