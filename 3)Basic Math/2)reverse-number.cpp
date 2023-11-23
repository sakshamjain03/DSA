#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int temp=n,ans=0;
    while(temp!=0){
        int dig=temp%10;
        temp/=10;
        ans=(ans*10)+dig;
    }
    cout<<ans;
}
