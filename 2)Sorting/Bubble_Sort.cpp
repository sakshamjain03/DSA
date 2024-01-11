Coding Ninjas
void bubbleSort(vector<int>& arr, int n) 
{   int timesrun=0; 
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                timesrun++;
            }
            
        }
        if(timesrun==0){
                break;
            }
    }   
}

GFG
void swap(int arr[],int j){
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
}
void bubbleSort(int arr[], int n) 
{
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j);
            }
        }
    }
}