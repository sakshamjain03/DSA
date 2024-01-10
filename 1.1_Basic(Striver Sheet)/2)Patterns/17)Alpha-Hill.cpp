void alphaHill(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        char let=64;
        for(int j=1;j<=2*i-1;j++){
            if(j<=i){
                let++;
                cout<<let<<" ";
            }
            else{
                let--;
                cout<<let<<" ";
            }
        }
        cout<<endl;
    }
}