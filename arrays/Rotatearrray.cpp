#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    int n,d;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    cin>>a[i];
    reverse(a,a+d);//O(d)
    reverse(a+d,a+n);//O(n-d)
    reverse(a,a+n);//O(n)
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}