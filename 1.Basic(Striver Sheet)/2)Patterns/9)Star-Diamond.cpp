void nStarDiamond(int n) {
    for(int i=0;i<n;i++){
        int gap=n-i,star=1+2*i;
        for(int j=1;j<gap;j++){
            cout<<" ";
        }
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        cout<<"\n";
        
    }
    for(int i=0;i<n;i++){
        int gap=i,star=2*(n-i-1)+1;
        for(int j=0;j<gap;j++){
            cout<<" ";
        }
        for(int j=0;j<star;j++){
            cout<<"*";
        }
        cout<<"\n";
}
}