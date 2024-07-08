// Using Two pointer Approach
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int A1=0,A2=0;
        while(A2<arr2.size()){
            int temp=arr2[A2];
            for(int i=A1;i<arr1.size();i++){
                if(arr1[i]==temp){
                    swap(arr1[i],arr1[A1]);
                    A1++;
                }
            }
            A2++;
    }
    sort(arr1.begin()+A1,arr1.end());
    return arr1;
    }
};