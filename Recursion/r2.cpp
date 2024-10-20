#include<bits/stdc++.h>
using namespace std;

void rev(int i,int a[],int n){
    if(i>=n/2) return;
    swap(a[i],a[n-i-1]);
    rev(i+1,a,n);
}

bool pal(int i,char a[],int n){
    if(i>=n/2) return true;
    if(a[i]!=a[n-i-1])
    return false;
    return pal(i+1,a,n);
}
int main(){
    int n;
    cin>>n;
    char a[20];
    for(int i=0;i<n;i++)cin>>a[i];
    if( pal(0,a,n))
    cout<<"palindrome";
    else
    cout<<"Not palindrome";
    
}