#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int final=arr[0];
    for(int i=1;i<=n-1;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=final;
    return arr;
}