#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int n=matrix.size();
            if (n == 0) return {};
            int m=matrix[0].size();
            int left,right,top,bottom;
            left=0;
            right=m-1;
            top=0;
            bottom=n-1;
            vector<int>ans;
            //path=right->bottom->left->top
            while(top<=bottom&&left<=right){
                for(int i=left;i<=right;i++) //moving right
                  {
                    ans.push_back(matrix[top][i]);
                  }
                  top++;
    
                   for(int i=top;i<=bottom;i++) //moving bottom
                  {
                    ans.push_back(matrix[i][right]);
                  }
                  right--;
                  if(top<=bottom){
                   for(int i=right;i>=left;i--) //moving left
                  {
                    ans.push_back(matrix[bottom][i]);
                  }
                  bottom--;
                  }
                    if(left<=right){
                   for(int i=bottom;i>=top;i--) //moving top
                  {
                    ans.push_back(matrix[i][left]);
                  }
                  left++;
                  }
    
                 
            }
           return ans; 
        }
    };