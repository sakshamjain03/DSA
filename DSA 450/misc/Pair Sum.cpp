#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){   
   vector<vector<int>>ans;
   sort(arr.begin(),arr.end());
   int n=arr.size();
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]+arr[j]==s){
            vector<int>temp;
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            ans.push_back(temp);
         }
      }
   }
   return ans;
}