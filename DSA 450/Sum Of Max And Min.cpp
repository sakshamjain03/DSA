#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	int max=arr[0],min=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return max+min;
	
}