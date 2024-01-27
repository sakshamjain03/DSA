void reverseArray(vector<int> &arr , int m){
    int n=arr.size(),y=0;

    vector<int> temp;
    for(int i=n-1;i>m;i--){
        temp.push_back(arr[i]);
    }

    for(int j=m+1;j<n;j++){
        arr[j]=temp[y];
        y++;
    }
}