#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findmax(vector<int>&v){
            int maxi=INT_MIN;
            int n=v.size();
            for(int i=0;i<n;i++){
                maxi=max(maxi,v[i]);
            }
            return maxi;
        }
    
        long long calhrs(vector<int>&v,int hourly){
            long long totalh=0;
            int n=v.size();
            for(int i=0;i<n;i++){
                totalh+=ceil((double)v[i]/(double)hourly);
            }
            return totalh;
        }
        int minEatingSpeed(vector<int>& piles, int h) {
             
            int low=1,high=findmax(piles);
            while(low<=high){
                int mid=low+((high-low)/2);
                long long total=calhrs(piles,mid);
                if(total<=h){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
            return low;
        }
    };