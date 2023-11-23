// brute force
#include <algorithm>
int calcGCD(int n, int m){
    int lower=min(n,m),hcf=0;
    for(int i=1;i<=lower;i++){
        if(n%i==0&&m%i==0){
            hcf=i;
        }
    }
    return hcf;
}
// optimal- Euclidean algorithm
int calcGCD(int n, int m){
    if(m==0){
        return n;
    }
    return calcGCD(m,n%m);
}