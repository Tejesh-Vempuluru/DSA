#include<bits/stdc++.h>
using namespace std;

//outer loop for no of lines
//inner loop- focus on the columns and connect them somehow to the rows
//print in inner for loop
void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }cout<<endl;
    }
}
void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
}
void print3(int n){
    for(int i=0;i<n;i++){
        //no of spaces
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
       for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }cout<<endl;


    }
}
void print4(int n){
    for(int i=0;i<n;i++){
        //no of spaces
         for(int j=0;j<i;j++){
            cout<<" ";
        }  
      //no of stars
       for(int k=0;k<2*n-(2*i+1);k++){
            cout<<"*";
        }cout<<endl;

      
    }
}
void print5(int n){
    for(int i=1;i<=2*n-1;i++){
        int st=i;
        if(i>n) st=2*n-i;
        for(int j=1;j<=st;j++){
            cout<<"*";
        }cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print5(n);
}