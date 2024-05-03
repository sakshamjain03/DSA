#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1;i<n;i++){   //Run for n-1 times
        bool swaped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if( swaped==false){
            break;
        }
    }
    return;
}
