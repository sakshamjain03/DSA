void nLetterTriangle(int n) {
    for(int i=n;i>0;i--){
        char let=65;
        for(int j=1;j<=i;j++){
            cout<<let<<" ";
            let++;
        }
        cout<<endl;
    }
}