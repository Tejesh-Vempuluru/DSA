#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    //step 1 Finding the first zero
     int j=-1;
     for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
     }
     //step 2 swapping .j should always point to 0
     for(int i=j+1;i<n;i++){//i starts from j+1;
        if(a[i]!=0){//swap when i!=0
            swap(a[i],a[j]);
            j++;
        }
     }
     for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}