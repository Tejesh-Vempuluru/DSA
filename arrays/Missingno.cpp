#include<bits/stdc++.h>
using namespace std;
 /*Missing n0 
 Brute: 2 loops linear search
 Better: Hashing  
 */
void Sum(int a[],int n){
    int s1=(n*(n+1))/2;
    int s2=0;
    for(int i=0;i<n-1;i++){
        s2+=a[i];
    }
    cout<<s1-s2<<endl;
}

void XOR(int a[],int N){
    int xor1=0,xor2=0;
    int n=N-1;
    for(int i=0;i<n;i++){
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    cout<<(xor1^xor2);

}
int main(){
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    cin>>a[i];
    Sum(a,n);
    //XOR(a,n);
    }
