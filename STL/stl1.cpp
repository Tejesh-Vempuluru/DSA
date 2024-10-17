#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int>v;//creates empty container
    v.push_back(1);
    v.emplace_back(2);//it dynamically increases its size and pushes 2.faster
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    v.emplace_back(1,2);
    vector<int>v(5,100);//{100,100,100,100,100}
    vector<int>v(5);//5 0's or garbage value
    vector<int>v1(5,10);
    vector<int>v2(v1  );
    vector<int>::iterator it=v.begin();//gives address
    it++;
    cout<<*(it)<<" ";
     it+2;
    cout<<*(it)<<" ";
    vector<int>::iterator it=v.end();
   // vector<int>::iterator it=v.rend();
    //vector<int>::iterator it=v.rbegin();
    cout<<v[0]<<" ";
    cout<<v.back()<<" ";
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    //short cut
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    //10,20,12,23
    v.erase(v.begin()+1);//10,12,23
    //10,20,12,23,35
    v.erase(v.begin()+2,v.begin()+4);//10,20,35 [start,end)
    //insert function
    vector<int>v(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1,2,10);//{300,10,10,100,100}
    vector<int> copy(2,50);//50,50
    v.insert(v.begin(),copy.begin(),copy.end());//50,50,300,10,10,100,100
    cout<<v.size();
    v.pop_back();
    v1.swap(v2);
     v.clear();
     cout<<v.empty();

}