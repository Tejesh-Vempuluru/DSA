#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int>a;
   int n;
   cin>>n;
 for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    a.push_back(ele);
 }
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cnt++;
            maxi=max(cnt,maxi);
        }else{
            cnt=0;
        }
    }

    cout<<maxi;
    }