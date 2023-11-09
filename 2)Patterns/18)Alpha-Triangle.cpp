void alphaTriangle(int n) {
    for(int i=1;i<=n;i++){
        char let=65+n-1;
        for(int j=i;j>0;j--){
            cout<<let<<" ";
            let--;
        }
        cout<<endl;
    }
}