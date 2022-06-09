#include<bits/stdc++.h>
int sumOfMaxMin(int arr[], int n){
	return *min_element(arr,arr+n )+*max_element(arr,arr+n );
}