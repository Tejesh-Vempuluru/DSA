#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0) return;
    cout<<"Zoro"<<endl;
    return print(n-1);//time,&space complexity=O(n)
}
void linear(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    return linear(i+1,n);
}
void rev(int n){
    if(n==0) return;
    cout<<n<<endl;
    return rev(n-1);//time,&space complexity=O(n)
}
//print 1 to 10 backtraacking we should not use +1,in code we can use '-'
void blin(int n){
    if(n==0) return;
   blin(n-1);
   cout<<n<<endl;
} 
//print n to 1 backtracking we must not use rev(n-1);
void brev(int i,int n){
    if(i>n) return;
     brev(i+1,n);
     cout<<i<<endl;}

int main(){
    int n;
    cin>>n;
    brev(1,n);
}