#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Brute3sum(int n, vector<int>& nums) {
    set<vector<int>> st;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}



    class Solution {
        public:
            vector<vector<int>> threeSum(vector<int>& nums) {
                vector<vector<int>> ans;
                int n = nums.size();
                sort(nums.begin(), nums.end());
        
                for (int i = 0; i < n; i++) {
                    if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicate elements for `i`
        
                    int j = i + 1;
                    int k = n - 1;
        
                    while (j < k) {
                        int sum = nums[i] + nums[j] + nums[k];
        
                        if (sum < 0) {
                            j++;
                        } else if (sum > 0) {
                            k--;
                        } else {
                            ans.push_back({nums[i], nums[j], nums[k]});
                            
                            // Move `j` and `k` while avoiding duplicates
                            j++;
                            k--;
        
                            while (j < k && nums[j] == nums[j - 1]) j++; // Skip duplicate `j`
                            while (j < k && nums[k] == nums[k + 1]) k--; // Skip duplicate `k`
                        }
                    }
                }
                return ans;
            }
        };
        
int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    int n = nums.size();
    
    vector<vector<int>> result = Brute3sum(n, nums);
    
    // Print the result
    for (const auto& triplet : result) {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
