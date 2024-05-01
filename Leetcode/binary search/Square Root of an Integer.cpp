class Solution {
public:
    int mySqrt(long long int x) {
        int start=0,end=x;
        while(start<=end){
            long long int mid=(start+end)/2;
            if(mid*mid== x){
                return mid;
            }
            else if(mid*mid>x){
                end=mid-1;
            }
            else if(mid*mid<x){
                start=mid+1;
            }
        }
        return end;
    }
};


// For precision 
#include <iostream>
using namespace std;

    int mySqrt(long long int x) {
        int start=0,end=x;
        while(start<=end){
            long long int mid=(start+end)/2;
            if(mid*mid== x){
                return mid;
            }
            else if(mid*mid>x){
                end=mid-1;
            }
            else if(mid*mid<x){
                start=mid+1;
            }
        }
        return end;
    }
int PrecSqrt(int n,int pre,int root){
        double ans=root;
        double factor=1;
        for(int i=0;i<pre;i++){
            factor/=10;
            for(int j=root;j*j<n;j=j+factor){
                ans=j;
            }
        }
        return ans;
}
int main() {
    int n=0,Prec=0;
    cout<<"Enter Number to check Square root"<<endl;
    cin>>n;
    int root=mySqrt(n);
    cout<<"The Root is "<<root<<endl;
    cout<<"Enter Number of digits of precision "<<endl;
    cin>>Prec;
    double Precroot=PrecSqrt(n,Prec,root);
    cout<<"The more precise Root is "<<Precroot<<endl;
    
    return 0;
}