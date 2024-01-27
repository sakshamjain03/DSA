GFG & Coding Ninjas-
void insert(int arr[], int i)
    {
        int temp=arr[i-1];
        arr[i-1]=arr[i];
        arr[i]=temp;
    }
    //  public:
    void insertionSort(int arr[], int n)
    {
        for(int i=0;i<=n-1;i++){
            int j=i;
            while(j>0 && arr[j-1]>arr[j]){
                insert(arr,j);
                j--;
            }
        }
    } 