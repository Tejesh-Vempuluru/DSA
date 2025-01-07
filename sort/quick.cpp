#include<bits/stdc++.h>
using namespace std;

int fn(int arr[],int low,int high){
    int pi=high;
    int index=low;
    for(int i=low;i<high;i++){
        if(arr[i]<arr[pi]){
            swap(arr[i],arr[index]);
            index++;
        }
    }
    swap(arr[index],arr[pi]);
    return index;
}

void Quick(int arr[],int low,int high){
    if(low<high){
    int pivot=fn(arr,low,high);
    Quick(arr,low,pivot-1);
    Quick(arr,pivot+1,high);

    }
   
}

int main(){
    int a[]={28,36,23,8,77,56,34};
    int low=0;
    int high=6;
    Quick(a,low,high);
     for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
}