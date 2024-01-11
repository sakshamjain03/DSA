#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char x;
	cin>>x;
	int n=int(x);
	if(n>=65 && n<=90){
	    cout<<"1";
	}
	else if(n>=97 && n<=122){
	    cout<<"0";
	}
	else {
	    cout<<"-1";
	}
}