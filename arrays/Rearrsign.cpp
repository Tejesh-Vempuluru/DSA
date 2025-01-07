#include<bits/stdc++.h>
using namespace std;

vector<int> main(){
   vector<int>a;
   int n;
   cin>>n;
 for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    a.push_back(ele);    
 }
  vector<int>ans(n,0);
  int pos=0;
  int neg=1;
  for(int i=0;i<n;i++){
    if(a[i]<0){
        ans[neg]=a[i];
        neg+=2;

    }else{
        ans[pos]=a[i];
        pos+=2;
    }
  }
  
}