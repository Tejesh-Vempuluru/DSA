/*You are given an integer array bloomDay, 
an integer m and an integer k.
You want to make m bouquets. To make a bouquet,
 you need to use k adjacent flowers from the garden.
The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and 
then can be used in exactly one bouquet.
Return the minimum number of days you need to wait to be able to make m bouquets from the garden. 
If it is impossible to make m bouquets return -1.*/

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
         int findmin(vector<int>&v){
            int mini=INT_MAX;
            int n=v.size();
            for(int i=0;i<n;i++){
                mini=min(mini,v[i]);
            }
            return mini;
        }
         
        bool possible(vector<int>&arr,int day,int m,int k){
            int cnt=0;
            int noboq=0;
            for(int i=0;i<arr.size();i++){
                if(arr[i]<=day){
                    cnt++;
                }else{
                    noboq+=(cnt/k);
                    cnt=0;
                }
            }
            noboq+=(cnt/k);
            if(noboq>=m)return true;
            else
            return false;
        }
        
        int minDays(vector<int>& bloomDay, int m, int k) {
            long long n=bloomDay.size();
            long long t=(long long)m*k;
            if(n<t)return -1;
            int low=findmin(bloomDay);
            int high=findmax(bloomDay);
            int ans=high;
            while(low<=high){
                int mid=(low+high)/2;
                if(possible(bloomDay,mid,m,k)==true)
                {
                    ans=mid;
                    high=mid-1;
                }else{
                    low=mid+1;
                }
                
            }
            return low;
    
        }
    };