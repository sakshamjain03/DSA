brute force-
vector<int> getSecondOrderElements(int n, vector<int> a) {
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(a[j]<a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                min=i;
            }
        }
    }
    vector<int> ans;
    ans.push_back(a[n-2]);
    ans.push_back(a[1]);
    return ans;
}
