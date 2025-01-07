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
  int target;
  cin>>target;
  int left=0;
  int right=n-1;
  sort(a.begin(),a.end());
  while(left<right){
   int sum=a[left]+a[right];
   if(sum==target){
      cout<<"Yes";
      return 0;
   }else if(sum<target){
      left++;
   }else{
      right--;
   }
  }
  cout<<"No";
  return 0;
}