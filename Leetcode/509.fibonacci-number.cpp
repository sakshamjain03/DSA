
class Solution {
public:
    int fib(int n) {
        int Seq[30]={};
        Seq[0]=1;
        Seq[1]=1;
        if(n==0){
        return 0;
        }
        else if(n==1){
        return Seq[1];
        }
        else if(n>=2){
        for(int i=2;i<n;i++){
        Seq[i]=Seq[i-1]+Seq[i-2];
        }
        return Seq[n-1];
}
return 0;
}
};