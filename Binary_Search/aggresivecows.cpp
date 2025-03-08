#include<bits/stdc++.h>
using namespace std;

bool canplace(vector<int>&a,int dist,int cows){
    int cnt=1;
    int n=a.size();
    int last=a[0];
    for(int i=1;i<n;i++){
        if(a[i]-last>=dist){
            cnt++;
            last=a[i];
        }
    }
    if(cnt>=cows)return true;
    else return false;
}

int aggressive(vector<int>&stalls,int k){
    sort(stalls.begin(),stalls.end());
    int n=stalls.size();
    int low=1,high=stalls[n-1]-stalls[0];
    while(low<=high){
        int mid=(low+high)/2;
        if(canplace(stalls,mid,k)==true){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return high;
}