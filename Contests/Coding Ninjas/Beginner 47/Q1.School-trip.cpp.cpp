int isAllHappy(int n, vector<int> h) {
    int ans,a=0;
    for(int i=0;i<n-1;i++){
        if(h[a]>h[a+1]){
            ans=0;
            break;
        }
        else{
            ans=1;
        }
        a++;
    }
    return ans;
}