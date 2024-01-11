void symmetry(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*n-2*i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
        }
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*(i+1);j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}