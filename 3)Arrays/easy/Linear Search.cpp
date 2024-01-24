int linearSearch(int n, int num, vector<int> &arr)
{
    int x=arr.size();
    for(int i=0;i<=x-1;i++){
        if(arr[i]==num){
            return i;
            break;
        }
        
    }
    return -1;
}
