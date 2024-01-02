void sumOf(int n,int &sum){
    if(n==0) return;

    sum+=n;
    sumOf(n-1,sum);
}

long long sumFirstN(long long n) {
    // int sum=(n*n+n)/2;
    int sum=0;
    sumOf(n,sum);

    return sum;
}