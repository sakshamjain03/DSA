#include <bits/stdc++.h>
using namespace std;
void access(string x,int attempts,int recharge,int i,int& value){
    if(value<0){
        cout<<"NO"<<endl;
        return;
    }
    if(x[i]=='1'){
        value=recharge;
    }
    if(x[i]=='0'){
        value--;
    }
    
    if(attempts==0){
        if(value>=0){
        cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
    }
        return;
}
    access(x,attempts-1,recharge,i+1,value);
}

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int attempts,recharge,value=0;
	    cin>>attempts;
	    cin>>recharge;
	    string x;
	    cin>>x;
	    access(x,attempts,recharge,0,value);
	}
	return 0;
}
