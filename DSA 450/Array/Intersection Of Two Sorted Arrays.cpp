// Using HashMap -- Incomplete
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	map<int,int>intersection;
	for(auto it:arr1){
		intersection[it]++;
	}
	for(auto it:arr2){
		intersection[it]++;
	}
	vector<int> ans;
	for(auto it2:intersection){
		// if(it2.second>1){
			while(it2.second>1){
				ans.push_back(it2.first);
				it2.second-=2;
				}
		// }
	}
	return ans;
}

// With simple arrays or vectors Time Complexity: O(n*m)
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int>ans;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr2[j]>arr1[i]){
				break;
			}
			if(arr1[i]==arr2[j]){
				ans.push_back(arr1[i]);
				arr2[j]=arr1[i]=INT_MIN;
			}
		}
	}
	return ans;
}

// With simple arrays or vectors Time Complexity: O(n+m)
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0,j=0;
	vector<int> ans;
	while(i<n && j<m){
		if(arr1[i]<arr2[j]){
			i++;
		}
		else if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++,j++;
		}
		else if(arr1[i]>arr2[j]){
			j++;
		}

	}
	return ans;
}