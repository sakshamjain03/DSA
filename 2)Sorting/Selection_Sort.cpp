// Problem statement
// Sort the given unsorted array 'arr' of size 'N' in non-decreasing order using the selection sort algorithm.
//  Note:
// Change in the input array/list itself. 
// Example:
// Input:
// N = 5
// arr = {8, 6, 2, 5, 1}
// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
coding Ninjas
void selectionSort(vector<int>&arr) {
    int n=0;
    for(auto it:arr){
        n++;
    }
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                min=i;
            }
        }
    }
}

GFG
for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                min=i;
            }
        }
    }