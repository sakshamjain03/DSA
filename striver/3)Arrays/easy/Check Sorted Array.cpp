int isSorted(int n, vector<int> a) {
    for(int i=0;i<=n-2;i++){
        if(a[i+1]<a[i]){
            return 0;
            break;
        }
    }
    return 1;
}
