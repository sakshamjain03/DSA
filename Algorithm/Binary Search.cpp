#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int low=0,high=size-1,mid=(low+high)/2;
    while(low<=high){
        if(target==arr[mid]){
            return mid;
        }
        else if(target<mid){
            //Go to right side
            low=mid+1;
        }
        else{
            // Go to left side
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    return -1;
}
int main() {
    int n=0,target=0;
    cout<<"Size of array:"<<endl;
    cin>>n;
    int arr[n]={};
    cout<<"Enter Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Check For number:"<<endl;
    cin>>target;
    int ans=binarySearch(arr,n,target);
    cout<<"Index of "<<target<<" is :"<<ans;
    return 0;
}