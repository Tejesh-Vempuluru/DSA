#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];

    int slarge=-1;
    int large=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>large){
            slarge=large;
            large=a[i];
        }
    else if(a[i]<large&&a[i]>slarge){
        slarge=a[i];
    }
    }
   cout<<slarge;
}