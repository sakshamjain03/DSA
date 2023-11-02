// While question practice Striver A-to-Z Sheet
#include<iostream>
using namespace std;

int main(){
	int n,EvenSUM=0,OddSUM=0;   //initialisation
	cin>>n;
	while(n>0){ // condition
	    int last=n%10;
	    int rem=last%2;
	    if(rem==0){  //body
	        EvenSUM+=last;
	    }
	    else{
	        OddSUM+=last;
			i = 0;
	    }
	    n=n/10;         //increment
	}
	cout<<EvenSUM<<" "<<OddSUM;
}