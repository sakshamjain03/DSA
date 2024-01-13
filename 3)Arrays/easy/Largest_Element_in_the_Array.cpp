#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int max=arr[0];
    for(int i=1;i<=n-1;i++){        
        if(arr[i]>arr[max]){
            max=i;
        }
    }
    // vector<int> ans(max);
    return arr[max];
}
