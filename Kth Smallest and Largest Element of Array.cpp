#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    vector<int> sol;  
	sort(arr.begin(),arr.end());
    sol.push_back(arr[k-1]);
    sol.push_back(arr[n-k]);
    return sol;
}