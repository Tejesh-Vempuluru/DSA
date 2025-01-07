#include<bits/stdc++.h>
using namespace std;
/*Finding the no appear once while twice
Brute:2 loops linear search
Better: Hashing or map
Optimal: XOR (a^a=0,0^a=a)*/
int main(){
   vector<int>a;
   int n;
   cin>>n;
 for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    a.push_back(ele);
 }
 int Xor=0;
 for(int i=0;i<n;i++){
    Xor=Xor^a[i];

 }
 cout<<Xor;

}