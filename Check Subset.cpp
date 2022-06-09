#include<bits/stdc++.h>
bool checkSubset(vector < int > & arr1, vector < int > & arr2, int n, int m) {
    if(m>n){
        return false;
    }
    bool ans=false;
    map <int,int> m1;
    map <int,int> m2;
    for(int i=0;i<n;i++){
        m1[arr1[i]]++;
    }
     for(int i=0;i<m;i++){
        m2[arr2[i]]++;
    }
    vector<int>v;
   for(auto it=m2.begin();it!=m2.end();it++){
       v.push_back(it->first);
   }
    
   for(int i=0;i<v.size();i++){
       if(m2[v[i]]<=m1[v[i]]){
           ans=true;
       }
       else{
           ans=false;
           break;
       }
   }
    return ans;
   
}