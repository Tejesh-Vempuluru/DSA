#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int cntPairs(vector<int>& nums, int low, int mid, int high) {
            int right = mid + 1;
            int cnt = 0;
            for (int i = low; i <= mid; i++) {
                while (right <= high && nums[i] > 2LL * nums[right])
                    right++;
                cnt += (right - (mid + 1));
            }
            return cnt;
        }
    
        void merge(vector<int>& arr, int low, int mid, int high) {
            vector<int> temp;
            int left = low, right = mid + 1;
    
            while (left <= mid && right <= high) {
                if (arr[left] <= arr[right]) {
                    temp.push_back(arr[left++]);
                } else {
                    temp.push_back(arr[right++]);
                }
            }
    
            while (left <= mid) temp.push_back(arr[left++]);
            while (right <= high) temp.push_back(arr[right++]);
    
            for (int i = low; i <= high; i++) {
                arr[i] = temp[i - low];
            }
        }
    
        int mergeSort(vector<int>& arr, int low, int high) {
            if (low >= high) return 0;
            int cnt = 0;
            int mid = (low + high) / 2;
            cnt += mergeSort(arr, low, mid);
            cnt += mergeSort(arr, mid + 1, high);
            cnt += cntPairs(arr, low, mid, high);
            merge(arr, low, mid, high);
            return cnt;
        }
    
        int reversePairs(vector<int>& nums) {
            return mergeSort(nums, 0, nums.size() - 1);
        }
    };
    
    