// Brute force comparing all values
int findUnique(int *arr, int size){

    for (int i = 0; i < size; ++i)    {
        int j = 0;

        for (; j < size; j++)        {
            if (i != j && arr[i] == arr[j])
            {
                break;
            }
        }
        if(j==size){
            return arr[i];
        }
    }
}
// By taking xor of all values as XOR of 1|1=0
int findUnique(int *arr, int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}