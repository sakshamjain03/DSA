void alphaRamp(int n) {
    char let=65;
    for(int i=1;i<=n;i++){        
        for(int j=1;j<=i;j++){
            cout<<let<<" ";
        }
        cout<<endl;
        let++;
    }
}
