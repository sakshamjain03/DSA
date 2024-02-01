// On Coding Ninja Platform
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int n=nums.size();
    int neg=0,pos=0;
    while(pos<=n-1){
        if(nums[pos]<0){
            swap(nums[neg],nums[pos]);
            neg++,pos++;
        }
        else{
            pos++;
        }
    }
    return nums;
}

// On geekforgeeks
int temp[n]={},j=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                temp[j]=arr[i];
                j++;
            }
        }
        // for all postive or negative array
        if(j==0||j==n){
            return ;
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                temp[j]=arr[i];
                j++;
            }
        }
        // copy value of temp to arr
        memcpy(arr,temp,sizeof(temp));