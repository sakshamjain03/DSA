//    Method 1: Using Sort Function
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
//    sort(&arr[0],&arr[n]);
   
}

//    Method 2: Using If Else
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   // sort(&arr[0],&arr[n]);
   int count0=0,count1=0,count2=0;
   for(int i=0;i<=n-1;i++){
      if(arr[i]==0){
         count0++;
      }
      if(arr[i]==1){
         count1++;
      }
      if(arr[i]==2){
         count2++;
      }
   }
   for(int j=0;j<count0;j++){
      arr[j]=0;
   }
   for(int j=count0;j<count0+count1;j++){
      arr[j]=1;
   }
   for(int j=count0+count1;j<n;j++){
      arr[j]=2;
   }
}

// Method 3: Using Swap and Pointers
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        switch(arr[mid]){
            case 0:
                swap(arr[low],arr[mid]);
                low++;
                break;

            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[high]);
                high--;
                break;
        }
    }
}