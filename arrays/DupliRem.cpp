#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
   
   int i=0;
   for(int j=1;j<n;j++){
    if(a[i]!=a[j]){
        a[i+1]=a[j];
        i++;
    }
   }
   //cout<<"No of unique:"<<i+1;
   return i+1;
}