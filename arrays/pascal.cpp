#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int>generateRow(int row){
        long long ans=1;
        vector<int>ansrow;
        ansrow.push_back(1);
        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/(col);
            ansrow.push_back(ans);
        }
        return ansrow;
      }
    
    
        vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
         return ans; 
    
        } 
    };

    
    //given a row and col.ask to print element .formula is r-1Cc-1
     //in main fn pass n=r0w-1,r=col-1
    int ncr(int n,int r){
        long long res=1;
        for(int i=0;i<r;i++){
            res=res*(n-i);
            res=res/(i+1);

        }
        return res;
    }